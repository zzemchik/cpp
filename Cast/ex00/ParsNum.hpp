#include <iostream>
#include <iomanip>
#include <cmath>

class ParsNum {

	private:
		std::string 	_strCast;
		char			_valueChar;
		int				_valueInt;
		double			_valueDouble;
		float			_valueFloat;

		void 	CastChar( void );
		void 	CastInt( void );
		void 	CastFloat( void );
		void 	CastDouble( void );
		int		checkStr( void );
		void	printN( void );
		void	printNf( void );
	public:
		ParsNum(const std::string &);
		ParsNum(const ParsNum &);
		ParsNum & operator = (const ParsNum &);
		void 	setNewStr(const std::string &);

	class NotNum : public std::exception
		{
			public:
			NotNum() {};
			virtual const char* what() const throw ();
			virtual ~NotNum() throw () {};
		};

	~ParsNum();
};
