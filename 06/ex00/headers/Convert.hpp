#ifndef	CONVERT_HPP
# define	CONVERT_HPP

# include	<iostream>

# define	COL_RED		"\033[31;1m"
# define	COL_GRE		"\033[32;1m"
# define	COL_RES		"\033[0m"

# define	NUMBER_KEYWORD_FLOATING	6

enum	e_display {
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

typedef struct s_input
{
	char	inChar;
	int		inInt;
	float	inFloat;
	double	inDouble;

	std::string	display[4];
} t_input;

class	Convert
{
	public:
		Convert(void);
		~Convert(void);

		void	table(std::string);

	private:
		static std::string const	_floatingKeyWord[NUMBER_KEYWORD_FLOATING];

		t_input	_input;

		int	_isChar(std::string&);
		int	_isKeyWord(std::string&);
		int	_isDouble(std::string&);

		void	_displayData(void);
};

#endif /* CONVERT_HPP */
