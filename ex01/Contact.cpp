/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:54:14 by sichoi            #+#    #+#             */
/*   Updated: 2022/06/23 22:25:45 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

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

void	Contact::set_field(int type, const std::string& prompt)
{
	std::string	input;

	std::cout << prompt;
	input.clear();
	std::getline(std::cin, input);
	switch (type)
	{
		case CT_FIRST_NAME:
			_first_name = input;
			break;
		case CT_LAST_NAME:
			_last_name = input;
			break;
		case CT_NICK_NAME:
			_nick_name = input;
			break;
		case CT_PHONE_NUM:
			_phone_number = input;
			break;
		case CT_SECRET:
			_secret = input;
			break;
	}
}

// int	main(void)
// {
// 	Contact ct;
// 	std::string s = "First name?: ";

// 	ct.set_field(CT_FIRST_NAME, s);
// 	std::cout << ct.get_first_name() << std::endl;
// 	return (0);
// }
