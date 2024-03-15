#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact{

    public:

        std::string     First_Name;
        std::string     Last_Name;
        std::string     Nickname;
        std::string	    Phone_Number;
        std::string	    Darkest_Secret;
};

class   Phone_Book{

    public:
        Contact     Contacts[8];
        int         count;

};


#endif