#include	"head.hpp"

static int	select_index(int *number, const int max)
{
	std::string			prompt;
	std::stringstream	ss;

	if (get_prompt(&prompt, "Index: "))
		return (true);

	// Check if the string is a number
	for (int i = prompt.length();  i; i--)
	{
		if (!std::isdigit(prompt[i - 1]))
		{
			std::cout << "80-book: not a positiv number "
				<< std::endl;
			return (select_index(number, max));
		}
	}

	// Transform a string to a number
	ss << prompt;
	ss >> *number;

	// Check if the number is in the range
	if (*number < 0 || max - 1 < *number)
	{
		std::cout << "80-book: not in the range"
			<< std::endl;
		select_index(number, max);
	}

	return (0);
}

// Save a new contact
int	Phonebook::add(void)
{
	// If all contact are filled, restart to write form the first
	if (NBR_CONTACT == index)
		index = 0;

	if (this->contact[index].add())
		return (true);
	index++;
	return (false);
}

// Print a header
void	Phonebook::print_header(void)
{
	std::cout << "|";
	print_box_word("Index");
	print_box_word("First Name");
	print_box_word("Last Name");
	print_box_word("Nickname");
	std::cout << std::endl;
}

// Print a table of contact
int	Phonebook::search(void)
{
	int	select;

	// Check if there is contact
	if (index == 0)
	{
		std::cout << "There is not any contact..."
			<< std::endl;
		return (false);
	}

	// Print index
	this->print_header();

	int	i;

	// Print every no empty contact
	i = 0;
	while (i < NBR_CONTACT && !contact[i].conisempty())
	{
		contact[i].print_contact_line(i);
		i++;
	}

	// Select a number
	if (select_index(&select, index))
		return (true);

	this->contact[select].display();
	return (false);
}

Phonebook::Phonebook(void)
{
	index = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}
