/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:14:44 by sichoi            #+#    #+#             */
/*   Updated: 2022/06/22 14:50:25 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# define CT_FIRST_NAME 0
# define CT_LAST_NAME 1
# define CT_NICK_NAME 2
# define CT_PHONE_NUM 3
# define CT_SECRET 4

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_number;
		std::string	_secret;

	public:
		Contact(void);
		~Contact(void);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nick_name(void);
		std::string	get_phone_number(void);
		std::string	get_secret(void);
		std::string	set_field(int type, std::string* in, const std::string& prompt);
};

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

#endif
