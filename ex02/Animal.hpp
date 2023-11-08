#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include "Brain.hpp"
# include <iostream>
 class Animal
 {
    protected:
        std::string type;
     public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        std::string getType() const;
        virtual void makeSound() const = 0;
 };

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

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);
        std::string getType() const;
        void makeSound() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat() ;
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &copy);
        void makeSound() const;
};


#endif