#include "Form.hpp"

Form::Form(const std::string &name, const int &gradeSign, const int & gradeDo) : _name(name), _gradeSign(gradeSign), _gradeDo(gradeDo), _sign(false)
{
	this->checkGrade(_gradeSign);
	this->checkGrade(_gradeDo);
}

Form::Form(const Form & form) : _name(form._name), _gradeSign(form._gradeSign), _gradeDo(form._gradeDo), _sign(false) {}

Form & Form::operator = (const Form & form) 
{
	if (this != &form)
	{
	}
	return (*this);
}

std::string Form::getName( void ) const { return this->_name; }

bool		Form::getSign( void ) const { return this->_sign; }

int			Form::getGradeSign( void ) const { return this->_gradeSign; }

int			Form::getGradeDo( void ) const { return _gradeDo; };

void 		Form::beSigned(const Bureaucrat & bur)
{
	switch ((int)this->_sign) {
		case 1: {
			throw FormAlreadyTrueException();
			break ;
		} 
		case 0: {
			if (bur.getGrade() > this->getGradeSign())
			{
				this->_sign = true;
				std::cout << "form signed!" << std::endl;
				break;
			}
			throw GradeTooLowException();
		}
	}	
}

void Form::checkGrade(const int & grade)
{
	if(grade < 1)
		throw GradeTooLowException();
	if(grade > 150)
		throw GradeTooHighException();
}

Form::GradeTooLowException::GradeTooLowException() {};

Form::GradeTooHighException::GradeTooHighException() {};

Form::FormAlreadyTrueException::FormAlreadyTrueException() {};

const char* Form::GradeTooHighException::what() const throw () { return "To hight grade!"; }

const char* Form::GradeTooLowException::what() const throw () { return "To low grade!"; }

const char* Form::FormAlreadyTrueException::what() const throw () { return "Form already signed"; }

Form::~Form() {} 

std::ostream & operator<<(std::ostream & os, const Form & form)
{
	std::string str;
	if (form.getSign() == true)
		str = "true";
	else
		str = "false";
	os << form.getName() << " " << str << " " << form.getGradeSign() << " " << form.getGradeDo();
	return (os);
}