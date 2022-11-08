#ifndef	SED_CLASS_HPP
# define SED_CLASS_HPP

class Sed	{

public:

	Sed(void);
	~Sed(void);
	
	static int	find_and_replace(std::string filename, std::string find, std::string replace);

private:
	static std::string	_my_replace(std::string str, std::string &find, std::string &replace);

};

#endif /* SED_CLASS_HPP */
