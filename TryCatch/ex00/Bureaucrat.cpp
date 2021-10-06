#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string & name, const int & grade) : _name(name), _grade(grade) { this->checkGrade(); }

Bureaucrat::Bureaucrat(const Bureaucrat & b) : _name(b.getName()), _grade(b.getGrade()) { }

Bureaucrat & Bureaucrat::operator = (const Bureaucrat & a) {
	if (this != &a)
		this->_grade = a._grade;
	return (*this);
}

std::string Bureaucrat::getName( void ) const { return (_name); }

int Bureaucrat::getGrade( void ) const { return (_grade); }

void Bureaucrat::gradeToHigh(const int & num_hight) {
	this->_grade += num_hight > 150;
	this->checkGrade();
}

void Bureaucrat::gradeToLow(const int & num_low)
{
	this->_grade -= num_low < 1;
	this->checkGrade();
}

void Bureaucrat::checkGrade( void )
{
	if(this->_grade < 1)
		throw GradeTooLowException();
	if(this->_grade > 150)
		throw GradeTooHighException();
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {};

Bureaucrat::GradeTooHighException::GradeTooHighException() {};

const char* Bureaucrat::GradeTooHighException::what() const throw () { return "To hight grade!"; }

const char* Bureaucrat::GradeTooLowException::what() const throw () { return "To low grade!"; }

Bureaucrat::~Bureaucrat() {}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bur)
{
	os << bur.getName() << " " << bur.getGrade();
	return os;
}