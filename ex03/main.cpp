#include <iostream>

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void leaks_check()
{
       system("leaks ex0");
}
 int main()
 {
       atexit(leaks_check);
       IMateriaSource *src = new MateriaSource();
       src->learnMateria(new Ice());
       src->learnMateria(new Cure());
       ICharacter *me = new Character("me");
       AMateria *tmp;
       tmp = src->createMateria("ice");
       me->equip(tmp);
       tmp = src->createMateria("cure");
       me->equip(tmp);
       me->unequip(1);
       ICharacter *bob = new Character("bob");
       me->use(0, *bob);
       me->use(1, *bob);
       delete bob;
       delete me;
       delete src;
       return 0;
 }