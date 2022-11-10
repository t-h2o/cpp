#include	"Fixed.hpp"

// Operator

#define	PLUS			0
#define	MINUS			1
#define	MULTIPLICATION	2
#define	SUBTRACTION		3

// Comparator

#define	EQU				4	// == Equal
#define	GEQ				5	// >= Not equal
#define	LEQ				6	// <= Less than
#define	NEQ				7	// != Less than or Equal
#define	LSS				8	// <  Greater than
#define	GTR				9	// >  Greater than or equal

static void
	calcul(Fixed const &a, Fixed const &b, int type)
{
	Fixed	result;

	std::cout << a;
	switch (type)
	{
		case PLUS:
			std::cout << " + ";
			result = a + b;
			break ;

		case MINUS:
			std::cout << " - ";
			result = a - b;
			break ;

		case MULTIPLICATION:
			std::cout << " * ";
			result = a * b;
			break ;

		case SUBTRACTION:
			std::cout << " / ";
			result = a / b;
			break ;

		default:
			std::cout <<"badflag" << std::endl;
			return ;
	}

	std::cout << b
		<< " = "
		<< result;

	std::cout << std::endl;
}

static void
	test_operator(void)
{
	for (int i = PLUS; i <= SUBTRACTION; i++)
	{
		calcul(Fixed(2.0f), Fixed(2.0f), i);
		calcul(Fixed(-2.0f), Fixed(2.0f), i);
		calcul(Fixed(2.12345f), Fixed(2.12346f), i);
		calcul(Fixed(2.89999f), Fixed(2.99999f), i);
		calcul(Fixed(2.0f), Fixed(2.0f), i);
		std::cout << std::endl;
	}
}

static void
	comp(Fixed const &a, Fixed const &b, int type)
{
	bool	result;

	std::cout << a;
	switch (type)
	{
		case EQU:
			std::cout << " == ";
			result = (a == b);
			break ;

		case GEQ:
			std::cout << " >= ";
			result = (a >= b);
			break ;

		case LEQ:
			std::cout << " <= ";
			result = (a <= b);
			break ;

		case NEQ:
			std::cout << " != ";
			result = (a != b);
			break ;

		case LSS:
			std::cout << " < ";
			result = (a < b);
			break ;

		case GTR:
			std::cout << " > ";
			result = (a > b);
			break ;

		default:
			std::cout <<"badflag" << std::endl;
			return ;
	}

	std::cout << b
		<< " = "
		<< result;

	std::cout << std::endl;
}

static void
	test_comparator(void)
{
	for (int i = EQU; i <= GTR; i++)
	{
		comp(Fixed(2.0f), Fixed(2.0f), i);
		comp(Fixed(-2.0f), Fixed(2.0f), i);
		comp(Fixed(2.12345f), Fixed(2.12346f), i);
		comp(Fixed(2.89999f), Fixed(2.99999f), i);
		comp(Fixed(8.5f), Fixed(2.1f), i);
		std::cout << std::endl;
	}
}

int	main(void)
{
	Fixed a(42.1f);
	Fixed b(21);

	test_operator();
	test_comparator();

	a.toFloat();
	a.toInt();
	a.getRawBits();

	a.setRawBits(a.getRawBits() + 1);

	a.toFloat();
	a.toInt();
	a.getRawBits();

	std::cout
		<< "a: "
		<< a
		<< std::endl;

	if (a > b)
		std::cout << "a is greather than b" << std::endl;
	else if (b > a)
		std::cout << "b is greather than a" << std::endl;
	else if (b == a)
		std::cout << "b is is equal to a" << std::endl;

	b = a;

	std::cout
		<< "b: "
		<< b
		<< std::endl;

	return 0; 
}
