#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}
AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}


void AMateria::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
std::string const &AMateria::getType() const
{
    return (this->_type);
}

#endif