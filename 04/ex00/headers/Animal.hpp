#include	<iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(Animal &other);
		~Animal(void);

		Animal	&operator=(Animal &other);

	private:
		std::string	_type;
};
