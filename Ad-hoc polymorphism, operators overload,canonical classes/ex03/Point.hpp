#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		~Point();
		Point(const Point & point);
		Point(const float &, const float &);

		Point & operator=(const Point &);

		float getX( void ) const;
		float getY( void ) const;
};

bool bsp( Point const &, Point const &, Point const &, Point const &);