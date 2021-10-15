
#include <iostream>
#include <iomanip>
#include <ctype.h>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string dark_secret;
        int iter;
        void PrintTableCase(std::string str);
    public:
                Contact();
                ~Contact();
        void    AddContact(std::string first_n, std::string last_n, \
                std::string nick, std::string phone_num, std::string dark, int i);
        void    GetOptions();
        int     Empty();
        void    GetFullInfo();
};
