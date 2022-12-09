#include	"color.hpp"

void	title(std::string title)
{
	std::cout
		<< COL_GRE
		<< title
		<< COL_RES;
}

void	section(std::string section)
{
	std::cout
		<< COL_GRE
		<< "\t"
		<< section
		<< "..."
		<< COL_RES;
}
