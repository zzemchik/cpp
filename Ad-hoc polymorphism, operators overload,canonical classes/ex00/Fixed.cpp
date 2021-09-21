#include "Fixed.hpp"

const int Fixed::_number_bit = 8;

Fixed::Fixed(const Fixed &cFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cFixed; 
}

Fixed & Fixed::operator=(const Fixed &cFixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &cFixed)
		this->_raw = cFixed._raw;
	return (*this);
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

Fixed::Fixed()
{
	_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}