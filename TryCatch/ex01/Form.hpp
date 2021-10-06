#pragma once
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradeSign;
		const int			_gradeDo;

		Form 	& operator = (const Form &);
		void 	checkGrade( const int & grade );

	public:
		Form(const std::string &name, const int &gradeSign, const int & _gradeDo);
		Form(const Form &);

		std::string getName( void ) const;
		bool		getSign( void ) const;
		int			getGradeSign( void ) const;
		int			getGradeDo( void ) const;

		void 		beSigned(const Bureaucrat &);

		class GradeTooHighException : public std::exception
		{
			public:
			GradeTooHighException();
			virtual const char* what() const throw ();
			virtual ~GradeTooHighException() throw () {} ;
		};

		class GradeTooLowException : public std::exception
		{
			public:
			GradeTooLowException();
			virtual const char* what() const throw ();
			virtual ~GradeTooLowException() throw () {};
		};
		class FormAlreadyTrueException : public std::exception
		{
			public:
			FormAlreadyTrueException();
			virtual const char* what() const throw ();
			virtual ~FormAlreadyTrueException() throw () {};
		};

		~Form();
};

std::ostream & operator<<(std::ostream & os, const Form & form);