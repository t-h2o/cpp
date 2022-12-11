#ifndef	COLOR_HPP
# define COLOR_HPP

# define	COL_RED		"\033[31;1m"
# define	COL_GRE		"\033[32;1m"
# define	COL_RES		"\033[0m"

# define	NEWLINE		std::cout << std::endl;

# include	<iostream>

void	title(std::string);
void	section(std::string);
void	message(std::string);

#endif /* COLOR_HPP */
