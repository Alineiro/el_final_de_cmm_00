#include "PhoneBook.hpp"

//MAYBE ADD TEXT TO A MACRO IN .HPP.
//
//SUBJECT SAYS DYNAMIC ALLOCATION IS NOT ALLOWED, BUT I SHOULD USE STD::STRING TO SAVE
//THE INPUT AND NOT WORRY, HOWEVER THIS IS DYNAMIC, SO I'M NOT SURE IF IT'S ALLOWED,
//CHECK AND CHANGE LATER IF NEEDED.
//
//WHEN SHOWING A SPECIFIC CONTACT USING SEARCH, DOES IT NEED TO SHOW ONLY THE FIRST
//10 CHARACTERS LIKE THE BASIC SEARCH COMMAND, OR DOES IT HAVE TO SHOW EVERYTHING?

void	createPhoneBook(PhoneBook &phone)
{
	std::string	input;

	std::cout << "Type ADD to create contacts, SEARCH to list them, and EXIT to close program" << std::endl;
	while (1)
	{
		std::cout << "Your input: ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			phone.addContact();
			//ADD CONTACT TO PHONEBOOK
		}
		else if (input == "SEARCH")
		{
			//SHOW CONTACTS LIST.
		}
		else if (input == "EXIT")
		{
			//EXIT PROGRAM
		}
		else
			continue ;
	}
}

int	main(void)
{
	PhoneBook	phone;

	createPhoneBook(phone);
	return (0);
}
