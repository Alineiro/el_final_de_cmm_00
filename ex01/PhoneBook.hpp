#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>

class	Contact
{
	private:
		std::string	_f_name;
		std::string	_l_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_secret;
	public:
		Contact();
		~Contact();
		void	setValues(std::string prompt, char c);
		void	showContact();
		void	showFullContact();
};

class	PhoneBook
{
	private:
		Contact	_contact[8];
		int	_idx;
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact();
};
