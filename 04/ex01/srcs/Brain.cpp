#include	"Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: Call default constructor"
		<< std::endl;

	return ;
}

Brain::Brain(Brain &other)
{
	std::cout << "Brain: Call copy constructor"
		<< std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];

	return ;
}

Brain
	&Brain::operator=(Brain &other)
{
	std::cout << "Brain: Call operator ="
		<< std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];

	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain: Call default destructor"
		<< std::endl;

	return ;
}
