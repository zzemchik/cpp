#include "Fixed.hpp"

const int Fixed::_number_bit = 8;
const int Fixed::_exp = GiveExp();

// OPERATORS

Fixed & Fixed::operator=(const Fixed &cFixed)
{
	if (this != &cFixed)
		this->_raw = cFixed._raw;
	return (*this);
}

std::ostream & operator<<(std::ostream& os, const Fixed & cFixed)
{
	os << cFixed.toFloat();
	return (os);
}

Fixed 	operator*(const Fixed & cFixed, const Fixed & cFixed2)
{
	Fixed r(cFixed.toFloat() * cFixed2.toFloat());
	return (r);
}

Fixed 	operator+(const Fixed & cFixed, const Fixed & cFixed2)
{
	Fixed r(cFixed.toFloat() + cFixed2.toFloat());
	return (r);
}

Fixed 	operator-(const Fixed & cFixed, const Fixed & cFixed2)
{
	Fixed r(cFixed.toFloat() - cFixed2.toFloat());
	return (r);
}


Fixed 	operator/(const Fixed & cFixed, const Fixed & cFixed2)
{
	Fixed r;
	if (cFixed.toFloat() == 0)
		r = Fixed (0);
	else
		r = Fixed (cFixed.toFloat() / cFixed2.toFloat());

	return (r);
}

Fixed & operator++(Fixed & cFixed)
{
		cFixed._raw += 1;
	return (cFixed);
}

Fixed & operator--(Fixed & cFixed)
{
		cFixed._raw -= 1;
	return (cFixed);
}

Fixed & operator++(Fixed & cFixed, int i)
{
	i += 0;
	Fixed &r(cFixed);
		cFixed._raw += 1;
	return (r);
}

Fixed & operator--(Fixed & cFixed, int i)
{
	i += 0;
	Fixed &r(cFixed);
		cFixed._raw -= 1;
	return (r);
}

bool operator<(const Fixed & cFixed, const Fixed & cFixed1)
{
	if (cFixed.toFloat() < cFixed1.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed & cFixed)
{
	if (this->_raw > cFixed._raw)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed & cFixed)
{
	if (this->_raw < cFixed._raw)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed & cFixed)
{
	if (this->_raw <= cFixed._raw)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed & cFixed)
{
	if (this->_raw >= cFixed._raw)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed & cFixed)
{
	if (this->_raw == cFixed._raw)
		return (true);
	return (false);
}
bool Fixed::operator!=(const Fixed & cFixed)
{
	if (this->_raw != cFixed._raw)
		return (true);
	return (false);
}

//CONSTRUCTOR

Fixed::Fixed()
{
	_raw = 0;
}

Fixed::Fixed(const int num)
{
	_raw = num << _number_bit; 
}

Fixed::Fixed(const float  num)
{
	_raw = static_cast<int>(roundf(_exp * num)); 
}

Fixed::Fixed(const Fixed &cFixed)
{
	*this = cFixed; 
}



//FUNCTION

const Fixed  &Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return(b);
	return (a);
}

const Fixed  &Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return(a);
	return (b);
}

float 	Fixed::toFloat() const
{
	return (static_cast<float>(_raw) / _exp);
}

int 	Fixed::toInt() const
{
	return(_raw >> _number_bit);
}

int Fixed::GiveExp()
{
	int num;

	num = 1;
	for (int i = 0; i < _number_bit; i++)
		num *= 2;
	return (num);
}


// Destructor

Fixed::~Fixed() {}