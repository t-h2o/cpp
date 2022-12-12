#include	<iostream>
#include	<vector>
#include	"color.hpp"

static void	fill_vec(std::vector<int> &vec)
{
	for (int i = 0; i < 10000; i+= 76)
		vec.push_back((i * i) % 1000);
}

static void	easy_find(std::vector<int> &vec, int number)
{
	std::vector<int>::iterator	iter;

	iter = find(vec.begin(), vec.end(), number);

	if (iter != vec.end())
	{
		std::cout
			<< "Easy finds \""
			<< number
			<< "\"."
			<< std::endl;
	}
	else
	{
		std::cout
			<< "Easy doesn't find \""
			<< number
			<< "\"."
			<< std::endl;
	}
}

int	main(void)
{
	title("Module 8 : exercice 00 : Easy find");

	std::vector<int>	vec;

	fill_vec(vec);

	easy_find(vec, 234);
	easy_find(vec, 344);

	return 0;
}
