#include <iostream>
#include <string>

//CONSTRUCTORS GO HERE RIGHT? FOR NOW AT LEAST.

class	Contact
{
	private:
		char	f_name[10];
		char	l_name[10];
		char	nickname[10];
		char	phone_number[10];
		char	secret[10];
	public:
		Contact();
		~Contact();
};

class	PhoneBook
{
	private:
		Contact	_contact[8];
	public:
		PhoneBook();
		~PhoneBook();
};

Contact::Contact()
{
	f_name[0] = '\0';
	l_name[0] = '\0';
