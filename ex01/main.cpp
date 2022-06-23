/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:51:04 by sichoi            #+#    #+#             */
/*   Updated: 2022/06/23 22:51:20 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
