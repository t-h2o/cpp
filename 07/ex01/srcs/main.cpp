#include	<iostream>

class MyIter
{
	public:
		template<typename T>
		static void	iter(T const & value)
		{
			std::cout << "Iter function called: "
				<< value
				<< std::endl;
		}
};

static void	test(void)
{
	std::string	value;

	value = "my value";

	MyIter::iter(value);
}

int	main(void)
{
	std::cout
		<< "Module 07 : Exercice 01 : Iter"
		<< std::endl;

	test();

	return 0;
}
