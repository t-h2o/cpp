#include	<iostream>

class	Rectangle
{
	public:

		Rectangle(double height = 1, double length = 2);
		Rectangle(Rectangle &other);
		~Rectangle();

		// setter
		void	setHeight(double height);
		void	setLenght(double length);
		
		// getter
		double	getHeight() const;
		double	getLength() const;
		
		// methode
		double	area() const;
		void	infomartion(void) const;

		static void	presentation(void);

	private:

		// Attributs
		double		_height;
		double		_length;

		static int	_counter;
};

void	Rectangle::presentation(void)
{
	std::cout
		<< "Rectangle:" << std::endl
		<< "- height" << std::endl
		<< "  - get" << std::endl
		<< "  - set" << std::endl
		<< "- length" << std::endl
		<< "  - get" << std::endl
		<< "  - set" << std::endl
		<< "- area" << std::endl
		<< "- infomartion" << std::endl
			<< std::endl;
}

int	Rectangle::_counter(0);

Rectangle::Rectangle(double height, double length): _height(height), _length(length)
{
	++_counter;
	std::cout << "counter: " << Rectangle::_counter << std::endl;
	return ;
}

Rectangle::Rectangle(Rectangle &other): _height(other._height), _length(other._length)
{
	++_counter;
	std::cout << "counter: " << Rectangle::_counter << std::endl;
	return ;
}

Rectangle::~Rectangle()
{
	--_counter;
	return ;
}

void	Rectangle::infomartion(void) const
{
	std::cout << "height: "
		<< this->getHeight()
		<< std::endl;

	std::cout << "length: "
		<< this->getLength()
		<< std::endl;

	std::cout << "area: "
		<< this->area()
		<< std::endl
		<< std::endl;
}

void	Rectangle::setHeight(double height)
{
	if (height <= 0)
		return ;
	_height = height;
}

void	Rectangle::setLenght(double length)
{
	if (length <= 0)
		return ;
	_length = length;
}

double	Rectangle::getLength(void) const
{
	return _length;
}

double	Rectangle::getHeight(void) const
{
	return _height;
}

double	Rectangle::area(void) const
{
	return _height * _length;
}

int	main(void)
{
	Rectangle::presentation();

	Rectangle rect1(2.2f, 8.4f);
	Rectangle rect2(42);
	Rectangle rect3;
	Rectangle rect4(rect1);

	rect1.infomartion();
	rect2.infomartion();
	rect3.infomartion();
	rect4.infomartion();
}
