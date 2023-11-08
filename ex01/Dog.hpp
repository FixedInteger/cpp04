#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include <iostream>
class Dog : public Animal
 {
    private:
        Brain *brain;
     public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        virtual void makeSound() const;
 };

 #endif