#include <iostream>
#include <cstring>
#include <cctype>

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
		int	emptyCheck();
		void	setFirstName(std::string prompt);
		void	setLastName(std::string prompt);
		void	setNickname(std::string prompt);
		void	setPhoneNumber(std::string prompt);
		void	setSecret(std::string prompt);
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
};
