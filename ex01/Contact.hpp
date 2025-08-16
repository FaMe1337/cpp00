/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabio <fabio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:40:39 by fabio             #+#    #+#             */
/*   Updated: 2025/08/16 21:56:57 by fabio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class Contact
{
	public:
		Contact();
		~Contact();
		void setContact();
		void getContact() const;
		void getInfo() const;

	private:
		static std::string _title[5];
		std::string _info[5];
};


#endif
