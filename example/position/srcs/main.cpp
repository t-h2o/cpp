#include	<iostream>

class	Position
{
	public:

		Position(double abscissa = 0, double ordinate = 0);
		Position(Position &other);

		void operator+=(Position const & pos);

		// setter
		void	setAbscissa(double abscissa);
		void	setLenght(double ordinate);
		
		// getter
		double	getAbscissa() const;
		double	getOrdinate() const;
		
		// methode
		double	area() const;
		void	infomartion(void) const;

	private:

		// Attributs
		double	_abscissa;
		double	_ordinate;
};

Position::Position(double abscissa, double ordinate): _abscissa(abscissa), _ordinate(ordinate)
{
	return ;
}

Position::Position(Position &other): _abscissa(other._abscissa), _ordinate(other._ordinate)
{
	return ;
}

void	Position::infomartion(void) const
{
	std::cout << "abscissa: "
		<< this->getAbscissa()
		<< std::endl;

	std::cout << "ordinate: "
		<< this->getOrdinate()
		<< std::endl;

	std::cout << "area: "
		<< this->area()
		<< std::endl
		<< std::endl;
}

void	Position::setAbscissa(double abscissa)
{
	if (abscissa <= 0)
		return ;
	_abscissa = abscissa;
}

void	Position::setLenght(double ordinate)
{
	if (ordinate <= 0)
		return ;
	_ordinate = ordinate;
}

double	Position::getOrdinate(void) const
{
	return _ordinate;
}

double	Position::getAbscissa(void) const
{
	return _abscissa;
}

double	Position::area(void) const
{
	return _abscissa * _ordinate;
}

// Surcharge externe (function)
const	Position operator+(Position pos1, Position const & pos2)
{
	pos1 += pos2;

	return pos1;
}

// Surcharge interne (method)
void	Position::operator+=(Position const & pos)
{
	_abscissa += pos.getAbscissa();
	_ordinate += pos.getOrdinate();
}

std::ostream& operator<<(std::ostream & output, Position const & pos)
{
	output
		<< "("
		<< pos.getAbscissa()
		<< ", "
		<< pos.getOrdinate()
		<< ")";

	return output;
}

int	main(void)
{
	Position pos1(2.2f, 8.4f);
Position pos2(42);
	Position pos3;
	Position pos4(pos1);
	Position pos5;
	Position pos6(420, 420);

	pos5 = pos1 + pos1;
	pos6 += pos1;

	pos1.infomartion();
	pos2.infomartion();
	pos3.infomartion();
	pos4.infomartion();
	pos5.infomartion();
	pos6.infomartion();

	std::cout << pos1 << std::endl;
}
