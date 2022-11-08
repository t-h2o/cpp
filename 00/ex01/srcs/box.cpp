#include	"head.hpp"

// Print a word in a box
void	print_box_word(std::string word)
{
	// Change the output setting
	std::cout.flags (std::ios::SIDE);
	std::cout.width (LENGTH);

	// Shorten the string to LENGTH characters and finish it with a point
	if (word.length() > LENGTH)
	{
		while (word.length() > LENGTH - 1)
			word.pop_back();
		word.push_back('.');
	}

	std::cout << word
		<< "|";
}
