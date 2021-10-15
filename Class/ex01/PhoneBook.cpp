
#include "PhoneBook.hpp"

void PhoneBook::AddNomber(std::string first_n, std::string last_n, \
std::string nick, std::string phone_num, std::string dark, int i)
{
    options[i].AddContact(first_n, last_n, nick, phone_num, dark, i);
}

void PhoneBook::GetAll() 
{
    std::cout << " __________________________________________\n";
    std::cout << "|  index  |   name   | last name| nickname |\n";
    std::cout << "|_________|__________|__________|__________|\n";

    for (int i = 0; i < 8; i++)
    {    
        if (options[i].Empty())
            break ;
        options[i].GetOptions();
        std::cout << "|_________|__________|__________|__________|\n";
    }
    
}

void    Contact::GetFullInfo()
{
    std::cout << std::setw(10) << "Name|" << std::setw(15) << first_name << std::endl;
    std::cout << std::setw(10) << "Last name|" << std::setw(15) << last_name << std::endl;
    std::cout << std::setw(10) << "Nickname|" << std::setw(15) << nickname << std::endl;
    std::cout << std::setw(10) << "Phone num|" << std::setw(15) << phone_number << std::endl;
    std::cout << std::setw(10) << "Dark sec|" << std::setw(15) << dark_secret << std::endl;

}
int       PhoneBook::GetOneContact(int index)
{
    if (options[index - 1].Empty())
        return (0);
    options[index - 1].GetFullInfo();
    return (1);
}
int       PhoneBook::Empty()
{
    if (options[0].Empty())
        return (0);
    return (1);
}

PhoneBook::PhoneBook()
{

}
PhoneBook::~PhoneBook()
{
    
}