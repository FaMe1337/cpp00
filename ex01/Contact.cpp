/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabio <fabio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:40:44 by fabio             #+#    #+#             */
/*   Updated: 2025/08/16 17:56:03 by fabio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::_title[5] =
{
	"first name",
	"last name",
	"nick name",
	"phone number",
	"darkest secret"
};

void	Contact::setContact()
{
	std::string input;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter contact " << Contact::_title[i] << ": ";
		std::getline(std::cin, input);
		PhoneBook::quitPhonebook();
		if (input.empty())
		{
			std::cout << "Can't enter empty fields\n";
			i--;
			continue;
		}
		this->_info[i] = input;
	}
	std::cout << "Contact added!\n";
}

void Contact::getContact() const
{
	for (int i = 0; i < 5; i++)
		std::cout << this->_title[i] << ": " << this->_info[i] << "\n";
}


void Contact::getInfo() const
{
	for (int i = 0; i < 3; i++)
	{
		if (this->_info[i].length() > 10)
			std::cout << std::setw(10) << this->_info[i].substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << this->_info[i] << "|";
	}
	std::cout << std::endl;
}
