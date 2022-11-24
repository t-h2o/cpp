#include	"Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: Call default constructor"
		<< std::endl;

	for (int i = 0; i < NUMBER_IDEA; i++)
		this->_idea[i] = "NO_IDEA_BRAINLESS";

	return ;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Brain: Call copy constructor"
		<< std::endl;

	(*this) = other;

	return ;
}

Brain
	&Brain::operator=(Brain const &other)
{
	std::cout << "Brain: Call operator ="
		<< std::endl;

	if (&other == this)
		return *this;

	for (int i = 0; i < NUMBER_IDEA; i++)
		this->_idea[i] = other._idea[i];
	
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain: Call default destructor"
		<< std::endl;

	return ;
}

std::string	Brain::getIdea(int number) const
{
	if (number < 0 || NUMBER_IDEA <= number)
	{
		std::cout << "CANNOT GET IDEA, NUMBER OVERRANGE" << std::endl;
		return "";
	}
	
	std::cout << "Brain: get idea number : "
		<< number
		<< std::endl;
	
	return this->_idea[number];
}

void	Brain::setIdea(int number, std::string const &idea)
{
	if (number < 0 || NUMBER_IDEA <= number)
	{
		std::cout
			<< number
			<< " : CANNOT SET IDEA, NUMBER OVERRANGE"
			<< std::endl;
		return ;
	}
	
	std::cout << "Brain: set idea : \""
		<< idea
		<< "\" : into : "
		<< number
		<< std::endl;

	this->_idea[number] = idea;

	return ;
}
