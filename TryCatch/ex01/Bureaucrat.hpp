#pragma once
#include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(const std::string &, const int &);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat & operator = (const Bureaucrat &);

		std::string getName( void ) const;
		int getGrade( void ) const;

		void gradeToHigh(const int &);
		void gradeToLow(const int &);
		void checkGrade( void );

		void signForm (Form &);
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
		~Bureaucrat();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &);

#include "Form.hpp"

