/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:03:23 by raneuman          #+#    #+#             */
/*   Updated: 2025/07/17 14:50:01 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phonebook;
	std::string	command;

	if (argc == 1)
	{
		std::cout << "Welcome to the PhoneBook!" << std::endl;
		while (1)
		{
			std::cout << "Please enter one of these commands (ADD, SEARCH, EXIT): ";
			if (!std::getline(std::cin, command))
			{
				std::cout << "\nInput closed. Exiting..." << std::endl;
				return (EXIT_FAILURE);
			}
			if (command == "ADD")
				phonebook.add();
			else if (command == "SEARCH")
				phonebook.search();
			else if (command == "EXIT")//Faut-il check si il y a des contacts et si oui les supprime avant de break?
				break ;
			else
				std::cout << "Unknown command. Please try with ADD, SEARCH or EXIT." << std::endl;
		}
		std::cout << "Goodbye!" << std::endl;
	}
	else
	{
		std::cerr << "Error: Not the right amount of arguments!" << std::endl;
		return	(EXIT_FAILURE);//Je pourrais tres bien ne pas utiliser la bibli cstlib et simplement return (1).
	}
	return (EXIT_SUCCESS);//Je pourrais tres bien ne pas utiliser la bibli cstlib et simplement return (0).
}
