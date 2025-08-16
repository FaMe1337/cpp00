/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabio <fabio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:40:32 by fabio             #+#    #+#             */
/*   Updated: 2025/08/16 17:15:26 by fabio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void setPhonebook();
		void getPhonebook() const;
		static void quitPhonebook();

	private:
		Contact _contacts[8];
		int		_index;
		int		_contact_number;
		int	_checkInput(std::string input) const;
};

#endif
