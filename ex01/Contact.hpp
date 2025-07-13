#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string> //Afin d'utiliser std::string.

class Contact {
    private: //Les variales sont ici afin de protéger les données.
        std::string firstName; //Variables accessibles que depuis l'intérieu de la classe.
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public: //Je force l'utilisateur à passer par les fonctions public pour modifier ou lire un contact sans qu'il puisse toucher directement aux variables. Ca s'appelle l'encapsulation!
        void    fillContact(); //Demande les infos à l'utilisateur.
        void    displayContact() const; //Affiche tous les champs.//const en ffin de fct signifique qu'elle va pas modifier mes attributs dans le prive elle peut juste les afficher ou les recuperer.
        void    displayList(int index) const; //Affiche résumé (pour SEARCH).
        bool    isValid() const; //Vérifie si tous les champs sont remplis.
};

#endif