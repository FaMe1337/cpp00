/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabio <fabio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:23:17 by fabio             #+#    #+#             */
/*   Updated: 2025/08/16 15:09:02 by fabio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
	PhoneBook Phonebook;
	std::string input;

	while (1)
	{
		std::cout << "Which command should I perform? ";
		std::getline(std::cin, input);
		Phonebook.quitPhonebook();
		if (input == "ADD")
			Phonebook.setPhonebook();
		else if (input == "SEARCH")
			Phonebook.getPhonebook();
		else if (input == "EXIT")
			return(0);
		else
		 std::cout << "Please use: ADD, SEARCH or EXIT" << std::endl;
	}
}
