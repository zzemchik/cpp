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
};

bool bsp( Point const a, Point const b, Point const c, Point const point);