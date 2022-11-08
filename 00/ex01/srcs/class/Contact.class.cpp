#include	"head.hpp"

// Print a info line
static void	print_info(std::string type, std::string value)
{
	// Print the type
	std::cout.flags (std::ios::right);
	std::cout.width (LENGTH + 2);
	std::cout << type
		<< ":";

	// Print the value
	std::cout << value
		<< std::endl;
}

// Print a number in a box
static void	print_box_number(int number)
{
	std::cout.flags (std::ios::SIDE);
	std::cout.width (LENGTH);
	std::cout << number
		<< "|";
}

// Print the 3 first string of a contact
void	Contact::print_contact_line(int number)
{
	std::cout << "|";
	print_box_number(number);

	for (int i = 0; i < 3; i++)
		print_box_word(this->data[i]);

	std::cout << std::endl;
}

int	Contact::conisempty(void)
{
	return (this->data[0].empty());
}

int	Contact::add(void)
{
	std::string	prompt;

	if (get_prompt(&prompt, "First name: "))
		return (true);
	this->data[0] = prompt;

	if (get_prompt(&prompt, "Last name: "))
		return (true);
	this->data[1] = prompt;

	if (get_prompt(&prompt, "Nickname: "))
		return (true);
	this->data[2] = prompt;

	if (get_prompt(&prompt, "Phone number: "))
		return (true);
	this->data[3] = prompt;

	if (get_prompt(&prompt, "secret: "))
		return (true);
	this->data[4] = prompt;

	return (false);
}

void	Contact::display(void)
{
	print_info("First Name", this->data[0]);
	print_info("Last Name", this->data[1]);
	print_info("Nickname", this->data[2]);
	print_info("Phone Number", this->data[3]);
	print_info("Secret", this->data[4]);
}

Contact::Contact(void)
{
	this->data[0] = "";
	return ;
}

Contact::~Contact(void)
{
	return ;
}

