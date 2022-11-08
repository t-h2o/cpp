#include	"head.hpp"

// Input
// Output
enum e_io {
	I,
	O,
};

std::string	Sed::_my_replace(std::string str, std::string &find, std::string &replace)
{
	for (int i = str.find(find); i != -1; i = str.find(find))
	{
		str.erase(i, find.length());
		str.insert(i, replace);
	}

	return str;
}

int
	Sed::find_and_replace(std::string file, std::string find, std::string replace)
{
	std::fstream	fs[2];
	std::string		line;

	// Open the input file
	fs[I].open(file, std::fstream::in);
	if (!fs[I].is_open())
	{
		std::cerr << "Error: input file didn't open"
			<< std::endl;
		return 1;
	}

	// Create the output file
	fs[O].open(file + ".replace", std::fstream::out | std::fstream::trunc);
	if (!fs[O].is_open())
	{
		std::cout << "Error: output file didn't open"
			<< std::endl;
		fs[I].close();
		return 1;
	}

	// Read all the infile to the EOF
	for (getline(fs[I], line); !fs[I].eof(); getline(fs[I], line))
		fs[O] << _my_replace(line, find, replace) << std::endl;

	// Close files
	fs[I].close();
	fs[O].close();

	return 0;
}

Sed::Sed()
{
	return ;
}

Sed::~Sed()
{
	return ;
}
