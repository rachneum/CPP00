#include "Contact.hpp"

void	Contact::fill_contact()
{
	std::cout << "First name: ";
	if (!std::getline(std::cin, FirstName))
		return ;
	std::cout << "Last name: ";
	if (!std::getline(std::cin, LastName))
		return ;
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, Nickname))
		return ;
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, PhoneNumber))
		return ;
	std::cout << "Darkest secret: ";
	if (!std:: getline(std::cin, DarkestSecret))
		return ;
}

bool	is_only_ws(const std::string str)
{
	size_t i = 0;
    while (i < str.length())
	{
        if (!isspace(((unsigned char)str[i])))
            return (false);
        ++i;
    }
	return (true);
}

bool Contact::is_valid() const
{
	return !FirstName.empty() && !is_only_ws(FirstName)
		&& !LastName.empty() && !is_only_ws(LastName)
		&& !Nickname.empty() && !is_only_ws(Nickname)
		&& !PhoneNumber.empty() && !is_only_ws(PhoneNumber)
		&& !DarkestSecret.empty() && !is_only_ws(DarkestSecret);
}

std::string	clean_tabs(const std::string str)
{
	std::string cleaned;
	
    size_t i = 0;
    while (i < str.length())
    {
        if (str[i] == '\t')
            cleaned += "    ";
        else
            cleaned += str[i];
        i++;
    }
    return (cleaned);
}

std::string format_field(std::string str)
{
	str = clean_tabs(str);
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (std::string(10 - str.length(), ' ') + str);
}

void	Contact::display_list(int index) const
{
	std::cout << std::setw(10) << index << "|"
		<< format_field(FirstName) << "|"
		<< format_field(LastName) << "|"
		<< format_field(Nickname) << std::endl;
}

void	Contact::display_contact() const
{
	std::cout << "First name: " << FirstName << std::endl;
    std::cout << "Last name: " << LastName << std::endl;
    std::cout << "Nickname: " << Nickname << std::endl;
    std::cout << "Phone number: " << PhoneNumber << std::endl;
    std::cout << "Darkest secret: " << DarkestSecret << std::endl;
}
