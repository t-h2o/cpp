#ifndef	ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

class Zombie	{

public:

	Zombie(std::string name);
	~Zombie(void);
	
	void	announce(void);

private:

	std::string	name;

};

#endif /* ZOMBIE_CLASS_HPP */
