/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:27:58 by air               #+#    #+#             */
/*   Updated: 2025/06/23 15:50:42 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->sizeContacts = 0;
}

int	is_number(std::string input)
{
	for (size_t i = 0; i < input.length() ; i++)
	{
		if (!isdigit(input[i]))
			return (0);
		}
	return (1);
}

void PhoneBook::addContact()
{
	Contact new_contact;
	std::string input;

	do {
		std::cout << "First Name: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (input.empty()) {
			std::cout << "Error: First Name cannot be empty.\n";
		}
	} while (input.empty());
	new_contact.setFirstName(input);
	do {
		std::cout << "Last Name: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (input.empty()) {
			std::cout << "Error: Last Name cannot be empty.\n";
		}
	} while (input.empty());
	new_contact.setLastName(input);
	do {
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (input.empty()) {
			std::cout << "Error: Nickname cannot be empty.\n";
		}
	} while (input.empty());
	new_contact.setNickname(input);
	do {
		std::cout << "Phone Number: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (input.empty()) {
			std::cout << "Error: Phone Number cannot be empty.\n";
		}
		if (!is_number(input))
			std::cout << "Enter valid number" << std::endl;			
	} while (input.empty() || !is_number(input));
	new_contact.setPhoneNumber(input);
	do {
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (input.empty()) {
			std::cout << "Error: Darkest Secret cannot be empty.\n";
		}
	} while (input.empty());
	new_contact.setDarkestSecret(input);
	
	Contacts[index] = new_contact;
	if (sizeContacts < 8)
		sizeContacts++;
	index = (index + 1) % 8;
}

std::string	ft_up_to_ten(std::string input)
{
	if (input.length() > 10 )
		return input.substr(0, 9) + ".";
	else
		return input;
}

void PhoneBook::searchContact() const
{
	if (sizeContacts == 0)
	{
		std::cout<<"Empty phoneBook";
		std::cout<<std::endl;
		return ;
	}
	std::cout<<std::setw(10)<<"Index";
	std::cout<<"|";
	std::cout<<std::setw(10)<<"First Name";
	std::cout<<"|";
	std::cout<<std::setw(10)<<"Last Name";
	std::cout<<"|";
	std::cout<<std::setw(10)<<"Nickname";
	std::cout<<std::endl;

	for (int i = 0; i < 8; i++)
	{
		std::cout<<std::setw(10) << i << "|" << std::setw(10) << ft_up_to_ten(Contacts[i].getFirstName());
		std::cout <<  "|" << std::setw(10) << ft_up_to_ten(Contacts[i].getLastName());
		std::cout <<  "|" << std::setw(10) << ft_up_to_ten(Contacts[i].getNickname());
		std::cout<<std::endl;
	}
	
	std::string index;
	const char	*i;
	int			in;
	
	while (1)
	{
		std::cout << "Please Enter Index" << std::endl;
		std::getline(std::cin, index);
		if (std::cin.eof())
			return ;
		if (index == "-1")
			break;
		i = index.c_str();
		if (!is_number(i) || index.empty())
			continue;
		in = i[0] - 48;
		if (in >= 0 && in <= 7)
		{
			if (Contacts[in].getFirstName().empty())
				continue;
			std::cout << Contacts[in].getFirstName() << std::endl;
			std::cout << Contacts[in].getLastName() << std::endl;
			std::cout << Contacts[in].getNickname() << std::endl;
			std::cout << Contacts[in].getPhoneNumber() << std::endl;
			std::cout << Contacts[in].getDarkestSecret() << std::endl;
			break;
		}
		else
		{
			std::cout << "Please enter valid index" << std::endl;
			continue;
		}
	}
}
