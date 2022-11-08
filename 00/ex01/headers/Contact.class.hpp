#ifndef	CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

// ◦ Un contact possède les champs suivants :
//   * first name
//   * last name
//   * nickname
//   * phone number
//   * darkest secret

class Contact	{

public:

	Contact(void);
	~Contact(void);

	// Display the contact
	void	display(void);

	// Add a new contact
	int		add(void);

	// Print a line of index
	void	print_contact_line(int number);

	// Check if the first string is empty
	int		conisempty(void);

private:

	std::string data[5];

};

#endif /* CONTACT_CLASS_HPP */
