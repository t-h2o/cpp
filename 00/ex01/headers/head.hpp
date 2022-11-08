#ifndef HEAD_HPP

# define HEAD_HPP

# include <iostream>
# include <sstream>
# include <cstring>
# include "Contact.class.hpp"
# include "Phonebook.class.hpp"

// Formating line box settings
# define SIDE	right
# define LENGTH	10

int		get_prompt(std::string *prompt, std::string message);
void	print_box_word(std::string word);

#endif /* HEAD_HPP */
