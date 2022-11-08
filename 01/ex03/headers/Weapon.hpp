#ifndef	WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

class Weapon	{

public:

	Weapon(std::string type);
	~Weapon(void);
	
	void		setType(std::string);
	std::string	&get_type(void);

private:

	std::string	_type;

};

#endif /* WEAPON_CLASS_HPP */
