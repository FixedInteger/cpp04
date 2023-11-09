#ifndef MATERIALSOURCE_HPP_
#define MATERIALSOURCE_HPP_

#include "interfaces.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *source[4];
    int count;
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &copy);
    MateriaSource &operator=(const MateriaSource &copy);
    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};
#endif /* MATERIALSOURCE_HPP_ */