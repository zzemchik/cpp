#include "Point.hpp"
#include <cmath>

float getVector(const Point &a, const Point &b, const Point &p)
{
	float apx = a.getX() - p.getX();
	float apy = a.getY() - p.getY();
	float abx = a.getX() - b.getX();
	float aby = a.getY() - b.getY();
	return (abx * apy - aby * apx);
}



bool bsp( Point const & a, Point const & b, Point const & c, Point const & point)
{
	
	float v1 = getVector(a, c, point);
	float v2 = getVector(c, b, point);
	float v3 = getVector(b, a, point);
	// std::cout << v1 << " " << v2 << " " << v3 << std::endl;
	if ((v1 <= 0 && v2 <= 0 && v3 <= 0) || (v1 >= 0 && v2 >= 0 && v3 >= 0))
		return (true);
	return (false);
}