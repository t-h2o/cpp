#ifndef	CONVERT_HPP
# define	CONVERT_HPP

# include	<iostream>

# define	COL_RED		"\033[31;1m"
# define	COL_GRE		"\033[32;1m"
# define	COL_RES		"\033[0m"

class	Convert
{
	public:
		Convert(void);
		~Convert(void);

		void	table(std::string);

	private:
		static std::string const	_floatingKeyWord[2];

		float	_convFloat(std::string);
};

#endif /* CONVERT_HPP */
