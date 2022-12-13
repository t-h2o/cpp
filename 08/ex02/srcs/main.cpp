#include	<iostream>
#include	<list>
#include	<stack>
#include	<algorithm>
#include	"color.hpp"
#include	"MutantStack.hpp"

static void	print_int(int number)
{
	std::cout << number << std::endl;
}

static void	test_mutantstack(void)
{
	section("Try mutant stack container (LIFO)");

	MutantStack<int>	numbers;

	section("\tPush 5 on the top");
	numbers.push(5);

	section("\tPush 8 on the top");
	numbers.push(8);

	section("\tPush 10 on the top");
	numbers.push(10);

	{
		MutantStack<int>	copy_numbers(numbers);

		while (!copy_numbers.empty())
		{
			section("\tprint top and pop");
			std::cout << "Top of the copy stack : " << copy_numbers.top() << std::endl;
			copy_numbers.pop();
		}

		copy_numbers = numbers;

		while (!copy_numbers.empty())
		{
			section("\tprint top and pop");
			std::cout << "Top of the copy stack : " << copy_numbers.top() << std::endl;
			copy_numbers.pop();
		}
	}

	{
		std::deque<int>::iterator iterNumbers = numbers.begin();
		section("\tprint the first number");
		std::cout << "-> " << *iterNumbers << std::endl;
	}

	{
		std::deque<int>::iterator iterNumbers = numbers.end() - 1;
		section("\tprint the last number");
		std::cout << "-> " << *iterNumbers << std::endl;
	}

	{
		std::deque<int>::const_iterator iterNumbers = numbers.begin();
		section("\tprint the first number");
		std::cout << "-> " << *iterNumbers << std::endl;
	}

	{
		std::deque<int>::const_iterator iterNumbers = numbers.end() - 1;
		section("\tprint the last number");
		std::cout << "-> " << *iterNumbers << std::endl;
	}

	{
		std::deque<int>::reverse_iterator iterNumbers = numbers.rbegin();
		section("\tprint the \"reverse begin\"");
		std::cout << "-> " << *iterNumbers << std::endl;
	}

	{
		std::deque<int>::reverse_iterator iterNumbers = numbers.rend() - 1;
		section("\tprint the \"reverse end\"");
		std::cout << "-> " << *iterNumbers << std::endl;
	}


	while (!numbers.empty())
	{
		section("\tprint top and pop");
		std::cout << "Top of the stack : " << numbers.top() << std::endl;
		numbers.pop();
	}
}

static void	test_stack(void)
{
	section("Try stack container (LIFO)");

	std::stack<int>	numbers;

	section("\tPush 5 on the top");
	numbers.push(5);

	section("\tPush 8 on the top");
	numbers.push(8);

	section("\tPush 10 on the top");
	numbers.push(10);

	while (!numbers.empty())
	{
		section("\tprint top and pop");
		std::cout << "Top of the stack : " << numbers.top() << std::endl;
		numbers.pop();
	}
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
	test_stack();
	test_mutantstack();

	return 0;
}
