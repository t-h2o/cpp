#include	<iostream>
#include	<list>
#include	"color.hpp"

static void	print_int(int number)
{
	std::cout << number << std::endl;
}

static void	test_list(void)
{
	section("Try list container");

	std::list<int>	numbers;

	for_each(numbers.begin(), numbers.end(), print_int);

	section("\tPush back 5");
	numbers.push_back(5);
	for_each(numbers.begin(), numbers.end(), print_int);
	
	section("\tPush back 8");
	numbers.push_back(8);
	for_each(numbers.begin(), numbers.end(), print_int);
	
	section("\tPush back 10");
	numbers.push_back(10);
	for_each(numbers.begin(), numbers.end(), print_int);

	section("\tprint reverse");
	for_each(numbers.rbegin(), numbers.rend(), print_int);
}

int	main(void)
{
	title("Module 8 : exercice 02 : mstack");

	test_list();

	return 0;
}
