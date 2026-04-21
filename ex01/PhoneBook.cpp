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
	_contact[current_idx].setValues(getInput("Type first name: "), 'f');
	_contact[current_idx].setValues(getInput("Type last name: "), 'l');
	_contact[current_idx].setValues(getInput("Type nickname: "), 'n');
	_contact[current_idx].setValues(getInput("Type phone number: "), 'p');
	_contact[current_idx].setValues(getInput("Type darkest secret: "), 's');
	if (_contact[current_idx].emptyCheck() == 1)
		return ;
	if (_idx != 8)
		_idx++;
}

//CAN I ADD A PIPE CHARACTER BEFORE AND AFTER EACH COLUMN, IT WOULD MAKE IT
//LOOK BETTER, BUT IM NOT SURE IF ITS AGAINST SUBJECT RULES.

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
		catch(std::exception &error)
		{
			std::cout << "Select a valid index value from 0 to 8" << std::endl;
		}
	}
	_contact[currentIdx].showFullContact();
}
