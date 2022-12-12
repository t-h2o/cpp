#include	<iostream>
#include	<vector>
#include	"color.hpp"

static void	fill_vec(std::vector<int> &vec)
{
	for (int i = 0; i < 10000; i+= 76)
		vec.push_back((i * i) % 1000);
}

int	main(void)
{
	title("Module 8 : exercice 00 : Easy find");

	std::vector<int>	vec;

	fill_vec(vec);

	return 0;
}
