#ifndef	ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

class Zombie	{

public:

	// If we want set a name
	Zombie(std::string name);
	Zombie();
	~Zombie(void);
	
	void	announce(void);
	void	setname(std::string);

private:

	std::string	name;

};

#endif /* ZOMBIE_CLASS_HPP */
