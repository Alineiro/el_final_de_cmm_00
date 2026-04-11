#include "PhoneBook.hpp"

//MAYBE ADD TEXT TO A MACRO IN .HPP.
//
//CURRENTLY SEGFAULTS, NEED TO CHANGE HOW INPUT IS SAVED.
//SUBJECT SAYS DYNAMIC ALLOCATION IS NOT ALLOWED, BUT I SHOULD USE STD::STRING TO SAVE
//THE INPUT AND NOT WORRY, HOWEVER THIS IS DYNAMIC, SO I'M NOT SURE IF IT'S ALLOWED,
//CHECK AND CHANGE LATER IF NEEDED.

void	CreatePhoneBook(PhoneBook &phone)
{
	std::string	input;

	std::cout << "Type ADD to create contacts, SEARCH to list them, and EXIT to close program" << std::endl;
	while (1)
	{
		std::cout << "Your input: ";
		std::cin >> input;
		if (input == "ADD")
		{
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

	CreatePhoneBook(phone);
	return (0);
}
