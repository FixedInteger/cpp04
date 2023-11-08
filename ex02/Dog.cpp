#include "Animal.hpp"
#include "Dog.hpp"
Dog::Dog() : Animal() 
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}
Dog::~Dog() 
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog operator= called" << std::endl;
    if (this != &copy)
    {
        this->brain = new Brain(*copy.brain);
        this->type = copy.type;
    }
    return *this;
}

void Dog::makeSound() const
{
   std::cout<<this->getType() <<" sound" << std::endl;
}