#ifndef  CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>//Pour setw().
# include <cctype>//Pour isdigit().
# include <cstdlib>//Pour exit().

class	Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		void	fill_contact();
		bool	is_valid() const;
		void	display_list(int index) const;
		void	display_contact() const;
};

#endif