#include	"Animal.hpp"
#include	"Cat.hpp"
#include	"Dog.hpp"

#include	"WrongAnimal.hpp"
#include	"WrongCat.hpp"
#include	"WrongDog.hpp"

#include	"Brain.hpp"

#define		COL_RED		"\033[31;1m"
#define		COL_GRE		"\033[32;1m"
#define		COL_RES		"\033[0m"

#define		NEWLINE		std::cout << std::endl

static void
	print_color(std::string color, std::string text)
{
	std::cout
		<< color
		<< text
		<< COL_RES;
}

static void	animal_show_idea(Animal &animal, int number)
{
	std::string	idea;

	idea = animal.getIdea(number);

	std::cout
		<< "Get the idea number "
		<< number
		<< " : "
		<< idea
		<< std::endl;
}

static void	brain_show_idea(Brain &brain, int number)
{
	std::string	idea;

	idea = brain.getIdea(number);

	std::cout
		<< "Get the idea number "
		<< number
		<< " : "
		<< idea
		<< std::endl;
}

static void
	print_animal_ref(Animal &animal, std::string message)
{
	NEWLINE;
	print_color(COL_GRE, "Display: " + message + "\n");
	std::cout << "makeSound: " ; animal.makeSound();
	std::cout << "getType: " << animal.getType();
	NEWLINE;
	NEWLINE;
}

static void
	print_animal_ptr(Animal *animal, std::string message)
{
	NEWLINE;
	print_color(COL_GRE, "Display: " + message + "\n");
	std::cout << "makeSound: " ; animal->makeSound();
	std::cout << "getType: " << animal->getType();
	NEWLINE;
	NEWLINE;
}

static void
	test_animals(void)
{
	// Constructor
	NEWLINE; print_color(COL_GRE, "\tConstructor..."); NEWLINE; NEWLINE;
	
	Animal	animal;
	Cat		garfield;
	Dog		milou;

	// MakeSound
	NEWLINE; print_color(COL_GRE, "\tMake sound..."); NEWLINE; NEWLINE;
	std::cout << "make sound:  animal: "; animal.makeSound();
	std::cout << "make sound: garfield: "; garfield.makeSound();
	std::cout << "make sound:   milou: "; milou.makeSound();

	// Set idea
	NEWLINE; print_color(COL_GRE, "\tSet ideas..."); NEWLINE; NEWLINE;
	animal.setIdea(2, "animal idea 2222");
	animal.setIdea(100, "OVERRANGEEEE");
	animal.setIdea(-1, "OVERRANGE---");

	garfield.setIdea(5, "garfiel is orange");
	milou.setIdea(5, "milou is white");

	// Get idea
	NEWLINE; print_color(COL_GRE, "\tGet ideas..."); NEWLINE; NEWLINE;
	animal_show_idea(animal, 2);
	animal_show_idea(milou, 5);
	animal_show_idea(garfield, 5);

	// Pointer
	NEWLINE; print_color(COL_GRE, "\tPointer..."); NEWLINE;
	print_animal_ptr(&garfield, "garfield");
	print_animal_ptr(&milou, "milou");
	print_animal_ptr(&animal, "animal");

	// Reference
	NEWLINE; print_color(COL_GRE, "\tReference..."); NEWLINE;
	print_animal_ref(garfield, "garfield");
	print_animal_ref(milou, "milou");
	print_animal_ref(animal, "animal");

	// Operator =
	NEWLINE; print_color(COL_GRE, "\toperator=..."); NEWLINE; NEWLINE;
	// Animal = Dog
	print_color(COL_GRE, "animal = milou;"); NEWLINE;
	animal = milou;
	print_animal_ptr(&animal, "animal");

	// Animal = Cat
	print_color(COL_GRE, "animal = garfield;"); NEWLINE;
	animal = garfield;
	print_animal_ptr(&animal, "animal");

	// Copy constructor
	NEWLINE; print_color(COL_GRE, "\tcopy constructor..."); NEWLINE; NEWLINE;
	print_color(COL_GRE, "Animal copy1(milou);"); NEWLINE;
	Animal copy1(milou);
	print_animal_ptr(&copy1, "copy1");
	
	print_color(COL_GRE, "Animal copy2(garfield);"); NEWLINE;
	Animal copy2(garfield);
	print_animal_ptr(&copy2, "copy2");

	// Call destructor
	print_color(COL_GRE, "\tDestructor..."); NEWLINE; NEWLINE;
	return ;
}

static void
	test_makeSound_ptr(void)
{
	// Constructor
	NEWLINE; print_color(COL_GRE, "\tConstructor (with new)..."); NEWLINE; NEWLINE;
	
	Animal	*animal = new Animal();
	const Animal	*milou = new Dog();
	const Animal	*garfield = new Cat();

	// MakeSound
	NEWLINE; print_color(COL_GRE, "\tMake sound..."); NEWLINE; NEWLINE;

	animal->makeSound();
	milou->makeSound();
	garfield->makeSound();

	// Operator =
	NEWLINE; print_color(COL_GRE, "\toperator=..."); NEWLINE; NEWLINE;

	// Animal = Dog
	print_color(COL_GRE, "*animal = *milou;"); NEWLINE;
	*animal = *milou;
	std::cout << "type: " <<animal->getType() << std::endl;

	// Animal = Cat
	NEWLINE; print_color(COL_GRE, "*animal = *garfield;"); NEWLINE;
	*animal = *garfield;
	std::cout << "type: " <<animal->getType() << std::endl;

	// Call destructor
	NEWLINE; print_color(COL_GRE, "\tDestructor (with delete)..."); NEWLINE; NEWLINE;
	delete animal;
	delete milou;
	delete garfield;
}

static void	test_brain(void)
{
	NEWLINE; print_color(COL_GRE, "\tBrain"); NEWLINE; NEWLINE;

	Brain	brain;

	brain.setIdea(-14, "number -14");
	brain.setIdea(0, "My first idea");
	brain.setIdea(4, "eat a bone");
	brain.setIdea(99, "My last idea");
	brain.setIdea(100, "overrange");
	brain_show_idea(brain, -14);
	brain_show_idea(brain, 0);
	brain_show_idea(brain, 4);
	brain_show_idea(brain, 98);
	brain_show_idea(brain, 99);
	brain_show_idea(brain, 100);

	NEWLINE; print_color(COL_GRE, "\toperator=..."); NEWLINE; NEWLINE;
	{
		Brain	braincopy;

		braincopy = brain;

		brain_show_idea(braincopy, -14);
		brain_show_idea(braincopy, 0);
		brain_show_idea(braincopy, 4);
		brain_show_idea(braincopy, 98);
		brain_show_idea(braincopy, 99);
		brain_show_idea(braincopy, 100);
	}

	NEWLINE; print_color(COL_GRE, "\tCopy constructor()"); NEWLINE; NEWLINE;
	{
		Brain	braincopy(brain);

		brain_show_idea(braincopy, -14);
		brain_show_idea(braincopy, 0);
		brain_show_idea(braincopy, 4);
		brain_show_idea(braincopy, 98);
		brain_show_idea(braincopy, 99);
		brain_show_idea(braincopy, 100);
	}
}

static void	test_subject(void)
{
	NEWLINE; print_color(COL_GRE, "\tGood animal"); NEWLINE; NEWLINE;

	{
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;
	}

	NEWLINE; print_color(COL_GRE, "\tWrong animal"); NEWLINE; NEWLINE;

	{
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	j = new WrongDog();
		const WrongAnimal*	i = new WrongCat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;
	}
}

static void	test_message(std::string message, void (*f)(void))
{
	print_color(COL_GRE, "START of " + message + "\n");
	f();
	print_color(COL_RED, "END of " + message + "\n\n");
}

int
	main(void)
{
	test_message("Test subjet", &test_subject);
	test_message("Test animals", &test_animals);
	test_message("Test animals with \"new\" & \"delete\"", &test_makeSound_ptr);
	
	test_message("Test brain", &test_brain);

	return 0;
}
