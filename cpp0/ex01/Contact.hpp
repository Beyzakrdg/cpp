/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: air <air@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:47:58 by air               #+#    #+#             */
/*   Updated: 2025/06/16 15:21:10 by air              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		void setFirstName(const std::string &first_name);
		void setLastName(const std::string &last_name);
		void setNickname(const std::string &nickname);
		void setPhoneNumber(const std::string &phone_number);
		void setDarkestSecret(const std::string &darkest_secret);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;	
};

#endif