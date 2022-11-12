#include	"Animal.hpp"
#include	"Cat.hpp"

static void
	test_constructor_cat(void)
{

	Cat	cat1;
	Cat	cat2(cat1);
	Cat	cat3;

	cat3 = cat1;

	cat1.makeSound();
	cat2.makeSound();

	return ;
}


int
	main(void)
{

	test_constructor_cat();
	std::cout << "\tEND TEST CONSTRUCTOR CAT"
		<< std::endl << std::endl;
	std::cout << "\tTEST CONSTRUCTOR CAT"
		<< std::endl;

	return 0;
}
