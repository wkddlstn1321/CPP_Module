#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include"IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:

public:
	MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	MateriaSource& operator=(const MateriaSource &materiaSource);
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif