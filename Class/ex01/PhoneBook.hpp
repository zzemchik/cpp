#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
   
    private:
        Contact options[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void    AddNomber(std::string first_n, std::string last_n, \
                std::string nick, std::string phone_num, std::string dark, int i);
        void    GetAll();
        int     Empty();
        int    GetOneContact(int index);
        
};

#endif