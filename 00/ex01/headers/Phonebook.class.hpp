#ifndef	PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# define NBR_CONTACT	8

class Phonebook	{

public:
	Phonebook(void);
	~Phonebook(void);

	int		add(void);
	int		search(void);

private:
	int		index;
	Contact	contact[NBR_CONTACT];

	void	print_header(void);

};

#endif /* PHONEBOOK_CLASS_HPP */
