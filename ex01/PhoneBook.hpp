/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:11:31 by sichoi            #+#    #+#             */
/*   Updated: 2022/06/23 22:46:23 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_PB 8

# include "Contact.hpp"


class PhoneBook
{
	private:
		Contact	_ct[MAX_PB];
		int		_cur_idx;
		int		_total;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		set_cur_idx(void);
		Contact&	get_cur_contact(void);
		int			get_max_cnt(void);
		void		set_contact(Contact& ct);
		Contact&	get_contact(int idx);
		void		show_contacts(void);
		void		show_certain_contact(void);
};

#endif
