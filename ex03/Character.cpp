#include "Character.hpp"

Character::Character() : name("default"), count(0)
{
    for (int i = 0; i < 4; i++)
        this->material[i] = NULL;
}

Character::Character(std::string name) : name(name), count(0)
{
    for (int i = 0; i < 4; i++)
        this->material[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->material[i];
}

Character::Character(const Character &copy)
{
    *this = copy;
}


Character &Character::operator=(const Character &copy)
{
    if (this != &copy)
    {
        this->name = copy.name;
        for (int i = 0; i < 4; i++)
            this->material[i] = copy.material[i]->clone();
        this->count = copy.count;
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{
    if (this->count < 4)
    {
        this->material[this->count] = m;
        this->count++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        if(!this->material[idx])
        {
            delete this->material[idx];
            this->material[idx] = NULL;
            this->count--;
        }
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4)
        this->material[idx]->use(target);
}