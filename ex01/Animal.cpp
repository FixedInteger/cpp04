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
        this->type = copy.type;
    return *this;
}

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;


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
        this->type = copy.type;
    return *this;
}
void Animal::makeSound() const
{
    std::cout<<"Animal " <<"sound" << std::endl;
}

void Dog::makeSound() const
{
   std::cout<<this->getType() <<" sound" << std::endl;
}

void Cat::makeSound() const
{
    std::cout<<this->getType() <<" sound" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout<<"WrongAnimal " <<"sound" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout<<this->getType() <<"sound" << std::endl;
}


