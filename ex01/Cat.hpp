#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
#include <iostream>


class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        virtual void makeSound() const;
};
 #endif