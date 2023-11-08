#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat operator= called" << std::endl;


    if (this != &copy)
    {
        *this->brain = *copy.brain;
        this->type = copy.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout<<this->getType() <<" sound" << std::endl;
}