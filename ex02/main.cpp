#include "Animal.hpp"
#include "Brain.hpp"
void ff()
{
    system("leaks program");
}
int main()
{
    // std::atexit(ff);
    Dog dog;
    {
        Dog a = dog ;
    }

}