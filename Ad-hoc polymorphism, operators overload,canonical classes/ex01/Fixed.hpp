#include <iostream>
#include <cmath>

class Fixed
{
	private:
		
		int _raw;
		static const int _number_bit;
		static const int _exp;
		static int GiveExp();
	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed &);
		Fixed(const float);
		Fixed(const int);

		Fixed 					&operator=(const Fixed &);
		float 					toFloat( void ) const;
		int 					toInt( void ) const;
		friend std::ostream& 	operator<<(std::ostream& os, const Fixed & cFixed);

};