#include "PhoneBook.hpp"

//MAYBE ADD TEXT TO A MACRO IN .HPP.
//
void	createPhoneBook(PhoneBook &phone)
{
	std::string	input;

	std::cout << "Type ADD to create contacts, SEARCH to list them, and EXIT to close program" << std::endl;
	while (1)
	{
		std::cout << "Your input: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phone.addContact();
		else if (input == "SEARCH")
			phone.searchContact();
		else if (input == "EXIT")
			exit(EXIT_SUCCESS);
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
