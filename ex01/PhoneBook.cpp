#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

//PhoneBook::PhoneBook() : currentIndex(0), contactCount(0) {}//revient au meme.
PhoneBook::PhoneBook() {
    currentIndex = 0;
    contactCount = 0;
}

void PhoneBook::add() {
    Contact newContact;
    newContact.fillContact();
    if (!newContact.isValid()) {
        std::cout << "Erreur : tous les champs doivent être remplis !" << std::endl;
        return;
    }
    contacts[currentIndex] = newContact;
    currentIndex = (currentIndex + 1) % 8;
    if (contactCount < 8)
        contactCount++;
    std::cout << "Contact ajouté avec succès !" << std::endl;
}

void PhoneBook::search() const {
    if (contactCount == 0) {
        std::cout << "Aucun contact enregistré." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    int i = 0;
    while (i < contactCount) {
        contacts[i].displayList(i);
        i++;
    }


    std::cout << "Entrez l’index du contact à afficher : ";
    std::string input;
    std::getline(std::cin, input);

    if (input.length() != 1 || !isdigit(input[0])) {
        std::cout << "Index invalide." << std::endl;
        return;
    }

    int index = input[0] - '0';
    if (index < 0 || index >= contactCount) {
        std::cout << "Aucun contact à cet index." << std::endl;
        return;
    }
    contacts[index].displayContact();
}
