#ifndef  PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		int		CountContact;
		int		CurrentIndex;

	public:
		PhoneBook();
		void	add();
		void	search() const;
};

#endif