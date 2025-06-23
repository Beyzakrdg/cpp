/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:21:33 by air               #+#    #+#             */
/*   Updated: 2025/06/23 13:45:52 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
class PhoneBook
{
	private:
		Contact Contacts[8];
		int index;
		int sizeContacts;
	public:
		PhoneBook();
		void addContact();
		void searchContact() const;
};

#endif