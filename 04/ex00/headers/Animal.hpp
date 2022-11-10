#include	<iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(Animal &other);
		~Animal(void);

	private:
		std::string	_type;
};
