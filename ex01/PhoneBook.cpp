/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:53:50 by sichoi            #+#    #+#             */
/*   Updated: 2022/06/23 23:24:08 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	_cur_idx = 0;
	_total = 0;
}

PhoneBook::~PhoneBook(void)
{

}

void	PhoneBook::set_cur_idx(void)
{
	_cur_idx = _total % MAX_PB;
	++_total;
}

Contact&	PhoneBook::get_cur_contact(void)
{
	return (_ct[_cur_idx]);
}

int	PhoneBook::get_total(void) const
{
	return (_total);
}

void	PhoneBook::set_contact(Contact& ct)
{
	ct.set_field(CT_FIRST_NAME, "First name: ");
	ct.set_field(CT_LAST_NAME, "Last name: ");
	ct.set_field(CT_NICK_NAME, "Nick name: ");
	ct.set_field(CT_PHONE_NUM, "Phone number: ");
	ct.set_field(CT_SECRET, "Secret: ");
}

Contact&	PhoneBook::get_contact(int idx)
{
	return (_ct[idx]);
}

std::string	PhoneBook::cut_string(std::string s) const
{
	if (s.size() > PAD_SIZE)
	{
		s[PAD_SIZE - 1] = '.';
		s.erase(PAD_SIZE);
	}
	return (s);
}

void	PhoneBook::show_contacts(void)
{
	int	max_cnt = std::min(get_total(), MAX_PB);
	if (max_cnt == 0)
	{
		std::cout << "No contact on phonbook!!" << std::endl;
		return ;
	}
	std::cout << std::setfill(' ') << std::setw(PAD_SIZE) << "Index" << "|"
			<< std::setfill(' ') << std::setw(PAD_SIZE) << "First name" << "|"
			<< std::setfill(' ') << std::setw(PAD_SIZE) << "Last name" << "|"
			<< std::setfill(' ') << std::setw(PAD_SIZE) << "Nick name" << "|"
			<< std::setfill(' ') << std::setw(PAD_SIZE) << "Phone num" << std::endl;
	for (int i = 0; i < max_cnt; i++)
	{
		Contact& ct = get_contact(i);
		std::cout << std::setfill(' ') << std::setw(PAD_SIZE) << i << "|"
				<< std::setfill(' ') << std::setw(PAD_SIZE) << cut_string(ct.get_first_name()) << "|"
				<< std::setfill(' ') << std::setw(PAD_SIZE) <<  cut_string(ct.get_last_name()) << "|"
				<< std::setfill(' ') << std::setw(PAD_SIZE) <<  cut_string(ct.get_nick_name()) << "|"
				<< std::setfill(' ') << std::setw(PAD_SIZE) <<  cut_string(ct.get_phone_number()) << std::endl;
	}
}

void	PhoneBook::show_certain_contact(void)
{
	std::string	input;
	int			max_cnt;
	int			idx;

	std::cout << "Enter what you want show: ";
	std::getline(std::cin, input);
	idx = std::stoi(input);
	max_cnt = std::min(get_total(), MAX_PB);
	if (idx > max_cnt - 1)
	{
		std::cout << "Wrong!! Maximum idx: " << max_cnt - 1 << std::endl;
		return ;
	}
	Contact	ct = get_contact(idx);
	std::cout << "Contact " << idx << std::endl
			<< "First name: " << ct.get_first_name() << std::endl
			<< "Last name: " << ct.get_last_name() << std::endl
			<< "Nick name: " << ct.get_nick_name() << std::endl
			<< "Phone number: " << ct.get_phone_number() << std::endl;
}

int	main(void)
{
	PhoneBook	pb;

	while (true)
	{
		std::string	cmd;
		std::cout << "----Enter Command----" << std::endl
				<< "|       ADD         |" << std::endl
				<< "|      SEARCH       |" << std::endl
				<< "|       EXIT        |" << std::endl
				<< "---------------------" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			pb.set_cur_idx();
			Contact& ct = pb.get_cur_contact();
			pb.set_contact(ct);
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			pb.show_contacts();
			pb.show_certain_contact();
		}
		else if (cmd.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "Wrong CMD!!" << std::endl;
	}
	return (0);
}
