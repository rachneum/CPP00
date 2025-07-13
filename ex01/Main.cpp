#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook phonebook;
    std::string command;

    std::cout << "Bienvenu dans PhoneBook !" << std::endl;

    while (true)
    {
        std::cout << "Entrez une commande (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Commande inconnue. Essayez ADD, SEARCH ou EXIT." << std::endl;
    }
    
    std::cout << "Au revoir !" << std::endl;
    return (0);
}