#include	"Animal.hpp"
#include	"Cat.hpp"

static void
	test_constructor_cat(void)
{

	Cat	cat1;
	Cat	cat2(cat1);
	Cat	cat3;

	cat3 = cat1;

	(void)cat1;
	(void)cat2;

	return ;
}

static void
	test_constructor_animal(void)
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
	std::cout << "\tTEST CONSTRUCTOR ANIMAL"
		<< std::endl;
	test_constructor_animal();
	std::cout << "\tEND TEST CONSTRUCTOR ANIMAL"
		<< std::endl << std::endl;

	test_constructor_cat();
	std::cout << "\tEND TEST CONSTRUCTOR CAT"
		<< std::endl << std::endl;
	std::cout << "\tTEST CONSTRUCTOR CAT"
		<< std::endl;

	return 0;
}
