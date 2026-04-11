#include <iostream>
#include <cstring>
#include <cctype>

class	Contact
{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;
	public:
		Contact();
		~Contact();
	//MEMBER FUNCTIONS/METHODS DECLARATIONS GO HERE.
};

//UNSURE IF I NEED ANY OTHER PARAMETER HERE.

class	PhoneBook
{
	private:
		Contact	_contact[8];
	public:
		PhoneBook();
		~PhoneBook();
};
