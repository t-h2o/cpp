#include	"head.hpp"

// pointer take an address of an object created in the hip
// this object will exist just to delete
static Zombie*
	newZombie( std::string name )
{
	Zombie	*pointer;

	pointer = new Zombie(name);
	pointer->announce();
	return (pointer);
}

// Paul will be init on the stack
// when the program will leave the scope of this function, paul will be delete
static void
	randomChump(std::string name)
{
	Zombie	paul(name);

	paul.announce();
}

int	main(void)
{
	Zombie	*jean;

	randomChump("pierre");

	jean = newZombie("jean");

	delete jean;
	return (0);
}
