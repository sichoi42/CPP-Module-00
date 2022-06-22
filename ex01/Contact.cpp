#include "Contact.hpp"

std::string	Contact::get_first_name(void)
{
	return (_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (_last_name);
}

std::string	Contact::get_nick_name(void)
{
	return (_nick_name);
}
std::string	Contact::get_phone_number(void)
{
	return (_phone_number);
}

std::string	Contact::get_secret(void)
{
	return (_secret);
}

std::string	Contact::set_field(int type, std::string* in, const std::string& prompt)
{
	switch (type)
	{
		case CT_FIRST_NAME:
			_first_name = *in;
			break;
		case CT_LAST_NAME:
			_last_name = *in;
			break;
		case CT_NICK_NAME:
			_nick_name = *in;
			break;
		case CT_PHONE_NUM:
			_phone_number = *in;
			break;
		case CT_SECRET:
			_secret = *in;
			break;
	}
}

int	main(void)
{
	Contact ct;
	std::string s;

	return (0);
}
