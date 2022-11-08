#ifndef	HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

class HumanA	{

public:

	HumanA(std::string name, Weapon & item);
	~HumanA(void);

	void	attack(void);
	void	setname(std::string);

private:

	std::string	_name;
	Weapon		&_hand;

};

#endif /* HUMANA_CLASS_HPP */
