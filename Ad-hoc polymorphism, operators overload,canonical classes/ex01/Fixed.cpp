#include "Fixed.hpp"

const int Fixed::_number_bit = 8;
const int Fixed::_exp = GiveExp();

Fixed & Fixed::operator=(const Fixed &cFixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &cFixed)
		this->_raw = cFixed._raw;
	return (*this);
}

std::ostream & operator<<(std::ostream& os, const Fixed & cFixed)
{
	os << cFixed.toFloat();
	return (os);
}

Fixed::Fixed()
{
	_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	_raw = num << _number_bit; 
}

Fixed::Fixed(const float  num)
{
	std::cout << "Float constructor called" << std::endl;
	_raw = static_cast<int>(roundf(_exp * num)); 
}

Fixed::Fixed(const Fixed &cFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cFixed; 
}


int 	Fixed::getRawBits()	 const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_raw);
}

void	Fixed::setRawBits (int const raw)
{
	_raw = raw;
}

float 	Fixed::toFloat() const
{
	return (static_cast<float>(_raw) / _exp);
}

int 	Fixed::toInt() const
{
	return(_raw >> _number_bit);
}

const int Fixed::GiveExp()
{
	int num;

	num = 1;
	for (int i = 0; i < _number_bit; i++)
		num *= 2;
	return (num);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}