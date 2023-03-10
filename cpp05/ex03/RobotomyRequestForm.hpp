#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>
#include <cstdlib>

class Form;

class RobotomyRequestForm : public Form
{
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm & src);

		void	execute(Bureaucrat const &executor) const;

	private :
		std::string	target;
};

#endif
