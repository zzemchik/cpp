#include "Point.hpp"

	Point::Point() : _x(0), _y(0) {}
	Point::Point(const float & x, const float & y) : _x(x), _y(y) {}
	Point::Point(const Point & point) { *this = point; }
	Point::~Point() {}


	float Point::getX() const 
	{ 
		return (this->_x.toFloat()); 
	}

	float Point::getY() const 
	{ 
		return (this->_y.toFloat()); 
	}

	Point & Point::operator=(const Point &point) 
	{

		if (this != &point)
		{
			this->~Point();
			*this = point;
		}
		return (*this);
	}