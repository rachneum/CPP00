#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
    private:       //Contact ici est le type (comme int, string, ..) sauf qu'ici c'est ma classe Contact que j'ai créé.
        Contact contacts[8]; //Tableau fixe de 8 contacts.
        int currentIndex; //Index où insérer le prochain contact.
        int contactCount; //Nombre de contacts actuels.
    public:
        PhoneBook(); //Constructeur.
        void add(); //Ajoute un contact.
        void search() const; //Cherche un contact. (const ici signifie que cette fonction ne modifiera pas l'objet.)
};
#endif

//Un constructeur est une fonction spéciale dans une classe qui est automatiquement appelée quand tu crées un objet.