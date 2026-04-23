#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_idx = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook exited successfully" << std::endl;
}

std::string	getInput(std::string prompt)
{
	std::string	input;

	std::cout << prompt;
	std::getline(std::cin, input);
	return (input);
}

void	PhoneBook::addContact(void)
{
	int	current_idx = 0;
	if (_idx != 8)
		current_idx = _idx;
	std::string	f_name = getInput("Type first name: ");
	std::string	l_name = getInput("Type last name: ");
	std::string	n_name = getInput("Type nickname: ");
	std::string	p_number = getInput("Type phone number: ");
	std::string	secret = getInput("Type darkest secret: ");

	if (f_name.empty() || l_name.empty() || n_name.empty() || p_number.empty() || secret.empty())
	{
		std::cout << "Contacts can't have empty fields" << std::endl;
		return ;
	}
	_contact[current_idx].setValues(f_name, 'f');
	_contact[current_idx].setValues(l_name, 'l');
	_contact[current_idx].setValues(n_name, 'n');
	_contact[current_idx].setValues(p_number, 'p');
	_contact[current_idx].setValues(secret, 's');
	if (_idx != 8)
		_idx++;
}

void	PhoneBook::searchContact(void)
{
	int	currentIdx = 0;

	if (_idx == 0)
	{
		std::cout << "There are no contacts saved" << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First name" << "|"
		<< std::setw(10) << "Last name" << "|"
		<< std::setw(10) << "Nickname" << "|" << std::endl;
	while (currentIdx < _idx)
	{
		std::cout << "|" << std::setw(10) << currentIdx << "|";
		_contact[currentIdx].showContact();
		currentIdx++;
	}
	while (1)
	{
		try
		{
			currentIdx = std::stoi(getInput("Select contact index: "));
			if (currentIdx >= 0 && currentIdx < _idx)
				break ;
			std::cout << "Select a valid index value from 0 to 8" << std::endl;
		}
		catch (std::exception &error)
		{
			std::cout << "Select a valid index value from 0 to 8" << std::endl;
		}
	}
	_contact[currentIdx].showFullContact();
}
