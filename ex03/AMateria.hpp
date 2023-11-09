#ifndef AMateria_HPP
# define AMateria_HPP
# include <iostream>

#include "interfaces.hpp"
class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(const AMateria &copy);
        AMateria &operator=(const AMateria &copy);
        std::string const &getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif