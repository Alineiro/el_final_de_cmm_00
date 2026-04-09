#include <iostream>
#include <string>

class	Contact
{
	public:
		Contact();
		~Contact();
};

class	PhoneBook
{
	private:
		Contact	_contact;
	public:
		PhoneBook();
		~PhoneBook();
};
