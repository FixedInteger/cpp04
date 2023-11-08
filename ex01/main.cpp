#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
void ff()
{
    system("leaks program");
}
int main()
{
    std::atexit(ff);
  Animal* animals[4];
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        animals[i] = new Dog();
        else
        animals[i] = new Cat();
    }
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }
}