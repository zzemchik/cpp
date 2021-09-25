#include "Point.hpp"
#include <iomanip>  
int main ()
{
	{
		Point a(7, 7);
		Point b = Point(11, 1);
		Point c(2, 2);
		Point p(7, 3);
		if (bsp(a, b, c, p))
			std::cout << std::setw(20) << "Yes!" << std::endl;
		else
			std::cout << std::setw(19) << "No!" << std::endl;
		std::cout << "correct answer: Yes" << std::endl << std::endl;
	}

	{
		Point a(7, 18);
		Point b = Point(11, 1);
		Point c(2, 2);
		Point p(7, 1);
		if (bsp(a, b, c, p))
			std::cout << std::setw(20) << "Yes!" << std::endl;
		else
			std::cout << std::setw(19) << "No!" << std::endl;
		std::cout << "correct answer: No" << std::endl << std::endl;
	}

	{
		Point a(7, 7);
		Point b = Point(11, 1);
		Point c(2, 2);
		Point p(7, 3);
		if (bsp(a, b, c, p))
			std::cout << std::setw(20) << "Yes!" << std::endl;
		else
			std::cout << std::setw(19) << "No!" << std::endl;
		std::cout << "correct answer: Yes" << std::endl << std::endl;
	}

	{
		Point a(0, 0);
		Point b = Point(4, 4);
		Point c(2, 2);
		Point p(7, 1);
		if (bsp(a, b, c, p))
			std::cout << std::setw(20) << "Yes!" << std::endl;
		else
			std::cout << std::setw(19) << "No!" << std::endl;
		std::cout << "correct answer: No" << std::endl << std::endl;
	}

	{
		Point a(12, 0);
		Point b = Point(4, 4);
		Point c(2, 2);
		Point p(7, 1);
		if (bsp(a, b, c, p))
			std::cout << std::setw(20) << "Yes!" << std::endl;
		else
			std::cout << std::setw(19) << "No!" << std::endl;
		std::cout << "correct answer: Yes" << std::endl << std::endl;
	}

	{
		Point a(2, 4);
		Point b = Point(7, 4);
		Point c(2, 2);
		Point p(3, 4);
		if (bsp(a, b, c, p))
			std::cout << std::setw(20) << "Yes!" << std::endl;
		else
			std::cout << std::setw(19) << "No!" << std::endl;
		std::cout << "correct answer: Yes" << std::endl << std::endl ;
	}

	{
		Point a(-44, -44);
		Point b = Point(-5, -4);
		Point c(20, 20);
		Point p(11, 11);
		if (bsp(a, b, c, p))
			std::cout << std::setw(20) << "Yes!" << std::endl;
		else
			std::cout << std::setw(19) << "No!" << std::endl;
		std::cout << "correct answer: Yes" << std::endl << std::endl;
	}

	{
		Point a(-7, -7);
		Point b = Point(-11, -1);
		Point c(2, 2);
		Point p(7, 3);
		if (bsp(a, b, c, p))
			std::cout << std::setw(20) << "Yes!" << std::endl;
		else
			std::cout << std::setw(19) << "No!" << std::endl;
		std::cout << "correct answer: No" << std::endl << std::endl ;
	}

	{
		Point a(200, -200);
		Point b = Point(0, 0);
		Point c(200, 200);
		Point p(7, 3);
		if (bsp(a, b, c, p))
			std::cout << std::setw(20) << "Yes!" << std::endl;
		else
			std::cout << std::setw(19) << "No!" << std::endl;
		std::cout << "correct answer: Yes" << std::endl << std::endl ;
	}

	{
		Point a(0, 0);
		Point b = Point(0, 0);
		Point c(0, 0);
		Point p(0, 0);
		if (bsp(a, b, c, p))
			std::cout << std::setw(20) << "Yes!" << std::endl;
		else
			std::cout << std::setw(19) << "No!" << std::endl;
		std::cout << "correct answer: Yes" << std::endl << std::endl ;
	}



}