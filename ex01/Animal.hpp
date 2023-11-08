#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

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