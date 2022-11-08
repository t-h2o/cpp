#include	"head.hpp"


int	main(void)
{
	std::string	str;
	std::string	*str_ptr;
	std::string	&str_ref = str;


	str = "HI THIS IS BRAIN";
	std::cout << "This string            : "
		<< str
		<< std::endl;

	str_ptr = &str;
	std::cout << "The pointer on string  : "
		<< *str_ptr
		<< std::endl;

	std::cout << "The reference on string: "
		<< str_ref
		<< std::endl;

	return (0);
}
