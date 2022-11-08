#include	"head.hpp"

static Zombie*
	newZombie(int people, std::string name)
{
	Zombie	*pointer;

	pointer = new (std::nothrow) Zombie[people] ;
	for (int i = 0; i < people; ++i)
		pointer[i].setname(name);
	
	return (pointer);
}

int	main(void)
{
	int		people;
	Zombie	*horde;

	people = 2;
	horde = newZombie(people, "jean");
	for (int i = 0; i < people; ++i)
		horde[i].announce();
	delete[] horde;

	people = 4;
	horde = newZombie(people, "paul");
	for (int i = 0; i < people; ++i)
		horde[i].announce();
	delete[] horde;

	return (0);
}
