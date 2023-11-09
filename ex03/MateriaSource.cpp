#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : count(0)
{
    for (int i = 0; i < 4; i++)
        this->source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->source[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++)
            this->source[i] = copy.source[i]->clone();
        this->count = copy.count;
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->count < 4)
    {
        this->source[this->count] = m;
        this->count++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->source[i]->getType() == type)
            return (this->source[i]->clone());
    }
    return (NULL);
}

