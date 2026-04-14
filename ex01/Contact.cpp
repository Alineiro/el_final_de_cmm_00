#include "PhoneBook.hpp"

Contact::Contact()
{
	//IDKKKKKKKK
}

Contact::~Contact()
{
	//IDK WHAT TO PUT INSIDE THE DESTRUCTOR, LIKELY NOTHING.
}

//UNSURE WHATS THE EXPECTED BEHAVIOUR IF A FIELD IS EMPTY, FOR NOW IT CANCELS
//SAVED CONTACT AND WRITES A GENERIC ERROR, MAYBE MEMORY ISSUES HAPPEN?

int	Contact::emptyCheck()
{
	if (_f_name.empty() || _l_name.empty() || _nickname.empty()
			|| _phone_number.empty() || _secret.empty())
	{
		std::cout << "Contacts can't have empty fields" << std::endl;
		return (1);
	}
	return (0);
}

//DO I HAVE TO TRUNCATE WHEN SAVING THE VALUES OR AFTER, WHEN SHOWING THEM?
//
//I DONT SEE A REASON TO HAVE SEPARATE FUNCTIONS, SHOULD LIKELY UNIFY THEM IF POSSIBLE.

void	Contact::setFirstName(std::string prompt)
{
	_f_name = prompt;
}

void	Contact::setLastName(std::string prompt)
{
	_l_name = prompt;
}

void	Contact::setNickname(std::string prompt)
{
	_nickname = prompt;
}

void	Contact::setPhoneNumber(std::string prompt)
{
	_phone_number = prompt;
}

void	Contact::setSecret(std::string prompt)
{
	_secret = prompt;
}
