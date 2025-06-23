/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:20:22 by air               #+#    #+#             */
/*   Updated: 2025/06/23 13:45:41 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string process;

    std::cout<<"---------------------------------------";
    std::cout<<std::endl;
    std::cout<<"--------------WELCOME------------------";
    std::cout<<std::endl;
    std::cout<<"---------------------------------------";
    std::cout<<std::endl;
    std::cout<<"----------SELECT-PROCESS---------------";
    std::cout<<std::endl;
    std::cout<<"-------- ADD | SEARCH | EXIT ----------";
    std::cout<<std::endl;

    while (1)
    {
        std::getline(std::cin, process);
        if (std::cin.eof())
            return (0);
        if (process == "ADD")
            phoneBook.addContact();
        else if (process == "SEARCH")
            phoneBook.searchContact();
        else if (process == "EXIT")
        {
            std::cout<<"Exited from PhoneBook";
            std::cout<<std::endl;
            return (0);
        }
        else
            std::cout<<"Please write valid process"<<std::endl;
            
    }
    return (0);
      
}