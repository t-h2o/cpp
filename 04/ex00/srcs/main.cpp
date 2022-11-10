#include	"Animal.hpp"

static void
	test_constructor(void)
{
	Animal	animal1;
	Animal	animal2(animal1);
	Animal	animal3;

	animal3 = animal1;

	(void)animal1;
	(void)animal2;

	return ;
}
int
	main(void)
{
	test_constructor();

	return 0;
}
