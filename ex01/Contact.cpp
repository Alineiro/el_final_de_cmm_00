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
//SAVED CONTACT AND WRITES A GENERIC ERROR.

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	return (str);
}

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

//I DONT SEE A REASON TO HAVE SEPARATE FUNCTIONS, SHOULD LIKELY UNIFY THEM IF POSSIBLE.

void	Contact::setValues(std::string prompt, char c)
{
	if (c == 'f')
		_f_name = prompt;
	else if (c == 'l')
		_l_name = prompt;
	else if (c == 'n')
		_nickname = prompt;
	else if (c == 'p')
		_phone_number = prompt;
	else if (c == 's')
		_secret = prompt;
}

void	Contact::showContact(void)
{
	std::cout << std::setw(10) << truncate(_f_name) << "|"
		<< std::setw(10) << truncate(_l_name) << "|"
		<< std::setw(10) << truncate(_nickname) << std::endl;
}
