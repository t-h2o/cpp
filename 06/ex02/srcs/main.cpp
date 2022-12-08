#include	"main.hpp"
#include	<cstdlib>

static Base *qwer(void)
{
	int	const asdf = rand() % 3;

	if (asdf == 0)
		return new A();
	else if (asdf == 1)
		return new B();

	return new C();
}

static void	identify_pointer(Base * letter)
{
	std::cout << "identity by pointer  : ";

	A *a = dynamic_cast<A *>(letter);
	B *b = dynamic_cast<B *>(letter);
	C *c = dynamic_cast<C *>(letter);

	if (a)
		a->me();
	else if (b)
		b->me();
	else if (c)
		c->me();
	else
		std::cout << "cannot define";

	std::cout << std::endl;
}

static void	identify_reference(Base & letter)
{
	std::cout << "identity by reference: ";

	try
	{
		A & a = dynamic_cast<A&>(letter);
		a.me();
		return ;
	}
	catch (std::exception &e){}

	try
	{
		B & a = dynamic_cast<B&>(letter);
		a.me();
		return ;
	}
	catch (std::exception &e){}

	try
	{
		C & a = dynamic_cast<C&>(letter);
		a.me();
		return ;
	}
	catch (std::exception &e){}

	std::cout
		<< "cannot define"
		<< std::endl;
}

static void	test(void)
{
	Base	*baseptr;

	baseptr = qwer();

	identify_reference(*baseptr);
	identify_pointer(baseptr);

	delete baseptr;
}

// print the exercice title
// generate the random seed
// call 10 times the test functions
// test with undefine value
int	main(void)
{
	std::cout
		<< "Module 06: Exercice 02"
		<< std::endl;

	srand(time(NULL));

	for (int i = 10; i; i--)
		test();

	Base	a;
	identify_reference(a);
	identify_pointer(&a);

	return 0;
}
