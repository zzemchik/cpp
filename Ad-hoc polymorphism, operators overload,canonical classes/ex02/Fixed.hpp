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

		int 					getRawBits() const;
		void					setRawBits (int const raw);
		float 					toFloat( void ) const;
		int 					toInt( void ) const;
		
		static const Fixed 		&max(const Fixed &, const Fixed &);
		static const Fixed 		&min(const Fixed &, const Fixed &);

		friend std::ostream& 	operator<<(std::ostream& os, const Fixed & cFixed);
		friend Fixed 			&operator++(Fixed & cFixed);
		friend Fixed 			&operator++(Fixed & cFixed, int i);
		friend Fixed 			&operator--(Fixed & cFixed, int i);
		friend Fixed 			&operator--(Fixed & cFixed);
		friend  Fixed 			operator+(const Fixed & cFixed, const Fixed & cFixed2);
		friend  Fixed 			operator-(const Fixed & cFixed, const Fixed & cFixed2);
		friend  Fixed 			operator*(const Fixed & cFixed, const Fixed & cFixed2);
		friend  Fixed 			operator/(const Fixed & cFixed, const Fixed & cFixed2);
		friend	bool			operator<(const Fixed & cFixed, const Fixed & cFixed1);

		bool					operator<(const Fixed & cFixed);
		bool					operator>(const Fixed & cFixed);
		bool					operator>=(const Fixed & cFixed);
		bool					operator<=(const Fixed & cFixed);
		bool					operator==(const Fixed & cFixed);
		bool					operator!=(const Fixed & cFixed);
		Fixed 					&operator=(const Fixed &);

};