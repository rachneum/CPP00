/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:04:26 by raneuman          #+#    #+#             */
/*   Updated: 2025/07/16 17:57:23 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		void	search() const;//Cherche un contact. (const ici signifie que cette fonction ne modifiera pas l'objet.)
};

#endif