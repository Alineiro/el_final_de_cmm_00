#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_idx = 0;
	//IDK WHAT TO PUT IN EITHER CONST/DESTRUCTOR.
}

PhoneBook::~PhoneBook()
{

}

//ITS LIKELY BETTER TO ADD A BOOLEAN THAT CHECKS IF ANY OF THE FIELDS
//IS EMPTY AFTER SAVING THEM ALL BEFORE ADDING TO THE INDEX (IDX).
//BUT THIS COULD CAUSE MEMORY ISSUES IF ANOTHER CONTACT WANTS TO
//BE SAVED, IDK HAVE TO TRY.

std::string	getInput(std::string prompt)
{
	std::string	input;

	std::cout << prompt;
	std::getline(std::cin, input);
	return (input);
}

void	PhoneBook::addContact(void)
{
	//NEED TO PROPERLY ADD CHECKS FOR EMPTY INPUTS.
	_contact[_idx].setFirstName(getInput("Type first name: "));
	_contact[_idx].setLastName(getInput("Type last name: "));
	_contact[_idx].setNickname(getInput("Type nickname: "));
	_contact[_idx].setPhoneNumber(getInput("Type phone number: "));
	_contact[_idx].setSecret(getInput("Type darkest secret: "));
	if (_contact[_idx].emptyCheck() == 1)
		return ;
	_idx++;
}
