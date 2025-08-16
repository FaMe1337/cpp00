/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabio <fabio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:40:36 by fabio             #+#    #+#             */
/*   Updated: 2025/08/16 18:03:48 by fabio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() :  _index(0), _contact_number(0)
{
	return;
}
PhoneBook::~PhoneBook()
{
	return;
}
void	PhoneBook::quitPhonebook()
{
	if (std::cin.eof())
	{
		std::cerr << "Unexpected EOF, closing.\n";
		exit (1);
	}
}


void PhoneBook::setPhonebook()
{
	this->_contacts[this->_index].setContact();
	this->_index++;
	this->_contact_number++;
	if (this->_index == 8)
		this->_index = 0;
}
void PhoneBook::getPhonebook() const
{
	std::string input;
	int n;
	bool hasError = true;

	if (this->_contact_number == 0)
	{
		std::cout << "No contacts available.\n";
		return;
	}
	std::cout << "     Index|First Name| Last Name| Nick Name|\n";
	for (int i = 0; i < this->_contact_number && i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		this->_contacts[i].getInfo();
	}
	while (hasError)
	{
		std::cout << "Enter contact index (1-8) for more information: ";
		std::getline(std::cin, input);
		this->quitPhonebook();
		if (input.empty() || this->_checkInput(input))
		{
			std::cout << "Please choose only between 1 and 8\n";
			continue;
		}
		n = atoi(input.c_str());
		if (n > 8 || n < 1)
		{
			std::cout << "Please choose between 1 and 8\n";
			continue;
		}
		if (n > this->_contact_number)
		{
			std::cout << "No contact added to " << n << " yet\n";
			continue;
		}
		this->_contacts[n - 1].getContact();
		hasError = false;
	}
}

int	PhoneBook::_checkInput(std::string input) const
{
	int i = 0;

	while (input[i])
	{
		if (i > 1)
			return (1);
		if (input[i] < '0' || input[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
