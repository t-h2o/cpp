#include	"Animal.hpp"
#include	"Cat.hpp"
#include	"Dog.hpp"

static void
	test_constructor_brain(void)
{

	Brain	brain1;
	Brain	brain3;

	brain1.ideas[10] = "idea 11";
	brain1.ideas[99] = "idea 100: end array";
	Brain	brain2(brain1);

	brain3 = brain1;

	std::cout << "Brain 3 [10]: "
		<< brain3.ideas[10] << std::endl;
	std::cout << "Brain 3 [99]: "
		<< brain3.ideas[99] << std::endl;

	std::cout << "Brain 3 [10]: "
		<< brain3.ideas[10] << std::endl;
	std::cout << "Brain 3 [99]: "
		<< brain3.ideas[99] << std::endl;

	return ;
}

static void
	test_constructor_cat(void)
{

	Cat	cat1;
	Cat	cat2(cat1);
	Cat	cat3;

	cat3 = cat1;

	(void)cat1;
	(void)cat2;

	std::cout << "Type is: "
		<< cat1.getType() << std::endl;
	std::cout << "Type is: "
		<< cat2.getType() << std::endl;
	std::cout << "Type is: "
		<< cat3.getType() << std::endl;

	return ;
}

static void
	test_constructor_dog(void)
{

	Dog	dog1;
	Dog	dog2(dog1);
	Dog	dog3;

	dog3 = dog1;

	(void)dog1;
	(void)dog2;

	std::cout << "Type is: "
		<< dog1.getType() << std::endl;
	std::cout << "Type is: "
		<< dog2.getType() << std::endl;
	std::cout << "Type is: "
		<< dog3.getType() << std::endl;

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

	std::cout << "\tTEST CONSTRUCTOR CAT"
		<< std::endl;
	test_constructor_cat();
	std::cout << "\tEND TEST CONSTRUCTOR CAT"
		<< std::endl << std::endl;

	std::cout << "\tTEST CONSTRUCTOR DOG"
		<< std::endl;
	test_constructor_dog();
	std::cout << "\tEND TEST CONSTRUCTOR DOG"
		<< std::endl << std::endl;

	std::cout << "\tTEST CONSTRUCTOR BRAIN {"
		<< std::endl;
	test_constructor_brain();
	std::cout << "}\t/* END TEST CONSTRUCTOR BRAIN */"
		<< std::endl;

	return 0;
}
