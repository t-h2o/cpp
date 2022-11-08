#ifndef	HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

class HumanB	{

public:

	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon & item);

private:

	std::string	_name;
	Weapon		*_hand;

};

#endif /* HUMANB_CLASS_HPP */
