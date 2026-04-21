#include "PhoneBook.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

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
		<< std::setw(10) << truncate(_nickname) << "|" << std::endl;
}

void	Contact::showFullContact(void)
{
	std::cout << "First name: " << _f_name << std::endl;
	std::cout << "Last name: " << _l_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _secret << std::endl;
}
