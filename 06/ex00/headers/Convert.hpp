#ifndef	CONVERT_HPP
# define	CONVERT_HPP

# include	<iostream>

# define	COL_RED		"\033[31;1m"
# define	COL_GRE		"\033[32;1m"
# define	COL_RES		"\033[0m"

# define	NUMBER_KEYWORD_FLOATING	1

class	Convert
{
	public:
		Convert(void);
		~Convert(void);

		void	table(std::string);

		typedef	struct	s_floatingKeyWord {
			std::string	keyWord;
			float		value;
		} t_floatingKeyWord;

	private:

		static t_floatingKeyWord const	_floatingKeyWord[2];

		float	_convFloat(std::string);
};

#endif /* CONVERT_HPP */
