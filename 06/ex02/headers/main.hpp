#include	<iostream>

class	Base
{
	public:
		virtual	~Base(void){}
};

class	A : public Base
{
	public:
		A(void){std::cout << "\"A\" created" << std::endl;}
		void	me(void)
		{
			std::cout << "A" << std::endl;
		}
};

class	B : public Base
{
	public:
		B(void){std::cout << "\"B\" created" << std::endl;}
		void	me(void)
		{
			std::cout << "B" << std::endl;
		}
};

class	C : public Base
{
	public:
		C(void){std::cout << "\"C\" created" << std::endl;}
		void	me(void)
		{
			std::cout << "C" << std::endl;
		}
};
