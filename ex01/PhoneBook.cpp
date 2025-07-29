/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:32:26 by raneuman          #+#    #+#             */
/*   Updated: 2025/07/18 17:33:48 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	CountContact = 0;
	CurrentIndex = 0;
	std::cout << "PhoneBook construcor called." << std::endl;
}

void	PhoneBook::add()
{
	Contact	newcontact;
	newcontact.fill_contact();
	if (!std::cin.eof())
	{
		if (!newcontact.is_valid())
		{
			std::cout << "Error: The phonebook must not have empty elements!" << std::endl;
			return ;
		}
	}
	else
	{
		std::cout << "\nInput closed. Exiting..." << std::endl;
		std::exit(EXIT_FAILURE);
	}
	contacts[CurrentIndex] = newcontact;
	CurrentIndex = (CurrentIndex + 1) % 8;
	if (CountContact < 8)
		CountContact++;
	std::cout << "Contact successfully added!" << std::endl;
}

void	PhoneBook::search() const
{

	if (CountContact == 0)
	{
		std::cout << "No contact have been added." << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
	int	i = 0;
	while (i < CountContact)
	{
		contacts[i].display_list(i);
		i++;
	}
	std::cout << "Please enter the index of the contact you want to display: ";
	std::string input;
	if (!std::getline(std::cin, input))
	{
		std::cout << "\nInput closed. Exitting..." << std::endl;
		std::exit(EXIT_FAILURE);
	}
	if (input.length() != 1 || !isdigit(input[0]))
	{
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	int index = input[0] - '0';
    if (index < 0 || index >= CountContact) {
        std::cout << "There isn't any contact in this index." << std::endl;
        return ;
    }
	contacts[index].display_contact();
}
