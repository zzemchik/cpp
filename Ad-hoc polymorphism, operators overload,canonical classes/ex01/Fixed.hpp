#include <iostream>
#include <cmath>

class Fixed
{
	private:
		
		int _raw;
		static const int _number_bit;
		static const int _exp;
		static const int GiveExp();
	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed &);
		Fixed(const float);
		Fixed(const int);

		Fixed 					&operator=(const Fixed &);
		int 					getRawBits() const;
		void					setRawBits (int const raw);
		float 					toFloat( void ) const;
		int 					toInt( void ) const;
		friend std::ostream& 	operator<<(std::ostream& os, const Fixed & cFixed);

};