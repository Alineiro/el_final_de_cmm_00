#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_idx = 0;
	//IDK WHAT TO PUT IN EITHER CONST/DESTRUCTOR.
}

PhoneBook::~PhoneBook()
{

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
	int	current_idx = 0;

	if (_idx == 0)
	{
		std::cout << "There are no contacts saved" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First name" << "|"
		<< std::setw(10) << "Last name" << "|"
		<< std::setw(10) << "Nickname" << std::endl;
	while (current_idx < _idx)
	{
		std::cout << std::setw(10) << current_idx << "|";
		_contact[current_idx].showContact();
		current_idx++;
	}
	//HERE DO THE WHOLE SELECT AN SPECIFIC CONTACT THING.
	//WHEN SHOWING A SPECIFIC CONTACT USING SEARCH, DOES IT NEED TO SHOW ONLY THE FIRST
	//10 CHARACTERS LIKE THE BASIC SEARCH COMMAND, OR DOES IT HAVE TO SHOW EVERYTHING?
	//SIMILARLY, DOES IT HAVE TO SHOW JUST THE INDEX, NAMES AND NICKNAME, OR EVERYTHING?
}
