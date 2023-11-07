#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
 class Animal
 {
    protected:
        std::string type;
     public:
        Animal();
        ~Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        std::string getType() const;
        void makeSound() const;
 };

 class Dog : public Animal
 {
     public:
        Dog();
        ~Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
 };

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
};
#endif