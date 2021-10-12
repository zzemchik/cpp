#include "ParsNum.hpp"

void 	ParsNum::CastChar( void )
{
	
	_valueChar = static_cast<float>(_valueDouble);
	std::cout << "Char: ";
	if (_valueDouble < 0 || _valueDouble > 128)
		std::cout << "impossible" << std::endl;
	else if (_valueDouble < 32 || _valueDouble == 128)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << _valueChar  << "'" << std::endl;

}

void	ParsNum::CastInt( void )
{
	std::cout << "Int: ";
	_valueInt = static_cast<float>(_valueDouble);
	std::cout << _valueInt << std::endl;
}

void	ParsNum::CastFloat( void )
{
	_valueFloat = static_cast<float>(_valueDouble);
	std::cout << "Float: ";
	if (int(_valueFloat * 10) % 10 == 0)
		std::cout << _valueFloat  << ".0f" << std::endl;
	else
		std::cout  << _valueFloat  << "f" << std::endl;
}

void	ParsNum::CastDouble( void )
{
	std::cout << "Double: ";
	if (int(_valueDouble * 10) % 10 == 0)
		std::cout << _valueDouble << ".0" << std::endl;
	else
		std::cout << _valueDouble << std::endl;
}
void	ParsNum::printN( )
{
	std::cout << "Char: imposible" << std::endl;
	std::cout << "Int: imposible" << std::endl;
	std::cout << "Float: " << _strCast + "f" << std::endl;
	std::cout << "Double: " << _strCast << std::endl;
}

void	ParsNum::printNf( )
{
	std::cout << "Char: imposible" << std::endl;
	std::cout << "Int: imposible" << std::endl;
	std::cout << "Float: " << _strCast << std::endl;
	std::cout << "Double: " << _strCast.erase(_strCast.size() - 1) << std::endl;
}

int	ParsNum::checkStr( void )
{
	if (_strCast == "nan" || _strCast == "-inf" || _strCast == "+inf" )
		return 1;
	if (_strCast == "nanf" || _strCast == "-inff" || _strCast == "+inff" )
		return 2;
	for (unsigned long i = 0; i < _strCast.size(); i++)
		if (!(_strCast[i] >= '0' && _strCast[i] <= '9'))
			if (!(_strCast[i] == '.' || _strCast[i] == 'f'))
				return -1;
	if (static_cast<int>(_strCast.find("f")) != -1 && (_strCast.find("f") != _strCast.rfind("f") ||  _strCast.find("f") + 1 != _strCast.size()))
		return -1;
	if (static_cast<int>(_strCast.find(".")) != -1 && (_strCast.find(".") != _strCast.rfind(".") ||  _strCast.find(".") == 0))
		return -1;
	return (0);
}


ParsNum::ParsNum(const std::string & str) : _strCast(str), _valueChar(0), _valueInt(0), _valueDouble(0), _valueFloat(0)
{
	
	switch (checkStr())
	{
		case -1:
			throw NotNum();
		case 1:
			printN();
			break;
		case 2:
			printNf();
			break;
		default:
			_valueDouble = ceil(stod(this->_strCast) * 10) / 10.0f;
			CastChar();
			CastInt();
			CastFloat();
			CastDouble();
	}
		

}

ParsNum::ParsNum(const ParsNum & a)
{
	*this = a;
}

ParsNum & ParsNum::operator = (const ParsNum &a)
{
	if (this != &a)
	{
		this->_strCast		= a._strCast;
		this->_valueChar   	= a._valueChar;
		this->_valueInt    	= a._valueInt;
		this->_valueDouble 	= a._valueDouble;
		this->_valueFloat  	= a._valueFloat;
	}
	return (*this);
}

void 	ParsNum::setNewStr(const std::string & str) { *this = ParsNum(str); }

const char* ParsNum::NotNum::what() const throw () { return "Char: imposible\nInt: imposible\nFloat: imposible\nDouble: imposible";}

ParsNum::~ParsNum() { }
