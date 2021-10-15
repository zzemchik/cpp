
#include <iostream>


class Karen
{
	private:
		std::string		_level[4];
		void (*_operation[5])(void);

		static void 	debug(void);
		static void 	info(void);
		static void 	warning(void);
		static void 	error(void);
		static void		errorarg(void);
	public:
		Karen();
		~Karen();
		void complain(std::string level);
};