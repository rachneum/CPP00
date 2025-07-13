#include "Contact.hpp"
#include <iostream>// Afin de formater du texte.
#include <iomanip>// Formate l'affichage?

void Contact::fillContact() {
    std::cout << "First name: ";
    std::getline(std::cin, firstName);//Stock la réponse dans la variable de la 
    std::cout << "Last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkestSecret);
}

bool Contact::isValid() const {
    return !firstName.empty() && !lastName.empty() && !nickname.empty()
        && !phoneNumber.empty() && !darkestSecret.empty();// Fonction empty renvoie true si vide et faux si elle ne l'est pas. Mais je veux check que les champs ne sont pas vides donc j'ajoute un "!".
}

void Contact::displayContact() const {
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phoneNumber << std::endl;
    std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

std::string formatField(std::string str) {// Me permet d'afficher les champs bien alignés dans mon tableau.
    if (str.length() > 10)// Si ma str est > que 10 (trop longue).
        return str.substr(0, 9) + ".";// Prends les 9 premiers caractères de str et ajoute un point finak à la chaîne coupée.
    return std::string(10 - str.length(), ' ') + str;// Si ma str est trop courte.
}

void Contact::displayList(int index) const {
    std::cout << std::setw(10) << index << "|"
              << formatField(firstName) << "|"
              << formatField(lastName) << "|"
              << formatField(nickname) << std::endl;
}
