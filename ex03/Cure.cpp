#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
    *this = copy;
}

Cure &Cure::operator=(const Cure &copy)
{
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
