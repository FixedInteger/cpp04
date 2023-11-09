#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "interfaces.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *material[4];
        int count;
    public:
        Character();
        Character(std::string name);
        virtual ~Character();
        Character(const Character &copy);
        Character &operator=(const Character &copy);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif