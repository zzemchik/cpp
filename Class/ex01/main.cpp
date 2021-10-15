#include "PhoneBook.hpp"
// #include <fstream>
// #include <iostream> 

bool    give_str(std::string *str)
{ 
    std::getline(std::cin, *str);
    if (std::cin.eof())
    {
        std::cout << "Error input!\n";
        return (1);
    }
    return(0);
}

int print_error()
{
    return(0);
}

int main ()
{
    PhoneBook book;
    std::string command;
    std::string nomber;
    std::string first_n;
    std::string last_n;
    std::string nickname;
    std::string darkest;
    int i;
    std::string index;

    i = 0;
    while (1)
    {

        std::cout << "Write command: ";
        if(give_str(&command))
            return(print_error());
        if (command == "ADD")
        {
            std::cout << "Write first name: ";
            if (give_str(&first_n))
                return(print_error());
            std::cout << "Write last name: ";
            if (give_str(&last_n))
                return(print_error());
            std::cout << "Write nickname: ";
            if (give_str(&nickname))
                return(print_error());
            std::cout << "Write nomber: ";
            if (give_str(&nomber))
                return(print_error());
            std::cout << "Write dark secret: ";
            if (give_str(&darkest))
                return(print_error());
            if (first_n.empty() || last_n.empty() || nickname.empty() || nomber.empty() || darkest.empty())
            {
                std::cout << "Error argument\n";
                continue ;
            }
            book.AddNomber(first_n, last_n, nickname, nomber, darkest, i);
            std::cout << "Done!\n";
            i++;
        }
        else if (command == "SEARCH")
        {
            book.GetAll();
            if (book.Empty() != 0)
            {
                std::cout << "Write index witch you need: ";
                    if (give_str(&index))
                        return(print_error());
                if (atoi(index.c_str()) < 1 || atoi(index.c_str()) > 8 || book.GetOneContact(atoi(index.c_str())) == 0)
                {
                    std::cout << "Incorect index!\n";
                    continue;
                }
            }
            std::cout << "Done!\n";

        }
        else if (command == "EXIT")
            break;
        else
            std::cout << "Incorrect input, try again!\n";
        if (i == 8)
                i = 0;
    
    }

}