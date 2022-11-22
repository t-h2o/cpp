#ifndef	CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include	<sstream>
# include	<iostream>

# define	VERBOSE	1

class ClapTrap	{

	public:

		/* Canonical class
		 * 1. Default constructor
		 * 2. Copy constructor
		 * 3. affectation operator
		 * 4. destructor
		 */
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &src);
		ClapTrap &operator=(const ClapTrap &src);
		~ClapTrap(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	printData(void) const;
		bool	isDead(void) const;
		bool	hasEnergy(void) const;

	private:

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

};

#endif /* CLAPTRAP_CLASS_HPP */
