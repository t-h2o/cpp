#include	<iostream>

typedef struct	s_data
{
	std::string	name;
	int			age;
} t_data;

t_data	*new_data(void)
{
	return new t_data;
}

static void	*serialize(t_data *dataptr)
{
	void	*rawptr;

	rawptr = reinterpret_cast<void *>(dataptr);
	return rawptr;
}

static t_data	*deserialize(void *rawptr)
{
	t_data	*dataptr;

	dataptr = reinterpret_cast<t_data *>(rawptr);
	return dataptr;
}

int	main(void)
{
	t_data		*dataptr;
	void		*rawraw;

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
		<< std::endl
		<< std::endl;

	dataptr = deserialize(rawraw);

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

