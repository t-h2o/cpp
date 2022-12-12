#include	<iostream>
#include	<vector>
#include	"color.hpp"

static void	fill_vec(std::vector<int> &vec)
{
	for (int i = 0; i < 10000; i+= 76)
		vec.push_back((i * i) % 1000);
}

template <typename T>
static void	easy_find(T &container, int number)
{
	typename T::iterator	iter;

	iter = find(container.begin(), container.end(), number);

	if (iter != container.end())
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

	section("Not in the vector");
	easy_find(vec, 234);

	section("In the vector");
	easy_find(vec, 344);

	return 0;
}
