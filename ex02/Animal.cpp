#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal operator= called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}


Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}


void WrongAnimal::makeSound() const
{
    std::cout<<"WrongAnimal " <<"sound" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout<<this->getType() <<"sound" << std::endl;
}


