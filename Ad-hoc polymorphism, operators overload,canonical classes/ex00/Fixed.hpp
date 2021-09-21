

#include <iostream>

class Fixed
{
	private:
		int _raw;
		static const int _number_bit;

	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed &);

		Fixed 		&operator=(const Fixed &);
		int 		getRawBits()	 const;
		void		setRawBits (int const raw);

};