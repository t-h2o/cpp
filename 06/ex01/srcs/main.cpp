#include	<iostream>
#include	<cstdint>

typedef struct	s_data
{
	std::string	name;
	int			age;
} t_data;

t_data	*new_data(void)
{
	return new t_data;
}

static std::uintptr_t	serialize(t_data *dataptr)
{
	std::uintptr_t	rawptr;

	rawptr = reinterpret_cast<uintptr_t>(dataptr);
	return rawptr;
}

int	main(void)
{
	t_data		*dataptr;
	std::uintptr_t	rawraw;

	std::cout
		<< "Module 06: Exercice 01"
		<< std::endl;

	dataptr = new_data();
	rawraw = serialize(dataptr);

	std::cout
		<< "data pointer: "
		<< dataptr
		<< std::endl;

	std::cout
		<< " raw pointer: "
		<< rawraw
		<< std::endl;

	delete dataptr;

	return 0;
}

