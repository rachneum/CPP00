/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:32:23 by raneuman          #+#    #+#             */
/*   Updated: 2025/07/17 14:49:49 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CONTACT_HPP
# define CONTACT_HPP

# include <string>//Me permet d'utiliser std::string.
# include <iostream>
# include <iomanip>
# include <cctype>//Pour isspace.

class	Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		void	fill_contact();//Demande les infos a l'utilisateur.
		bool	is_valid() const;//Attributs ne peuvent etre vide.
		void	display_list(int index) const;//Affiche résumé (pour SEARCH).
		void	display_contact() const;
};

#endif