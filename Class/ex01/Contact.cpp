 #include "Contact.hpp"

    void Contact::PrintTableCase(std::string str)
    {
        if (str.length() > 10)
        std::cout << str.substr(0, 8) << ".|";
        else
        std::cout << std::setw(10) << str << "|";
    }
    void Contact::GetOptions() 
    {
        std::cout << "|" << std::setw(8) << "Number " << iter + 1 << "|";
        PrintTableCase(first_name);
        PrintTableCase(last_name);
        PrintTableCase(nickname);
        std::cout << std::endl;
    }

    int Contact::Empty()
    {
        if (first_name.empty())
            return (1);
        else
            return 0;
    }
    
    void Contact::AddContact(std::string first_n, std::string last_n, \
    std::string nick, std::string phone_num, std::string dark, int i)
    {
        first_name = first_n;
        last_name = last_n;
        nickname = nick;
        phone_number = phone_num;
        dark_secret = dark;
        iter = i;
    }
    Contact::Contact()
    {

    }
    Contact::~Contact()
    {
        
    }
