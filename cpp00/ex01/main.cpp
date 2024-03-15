#include "phonebook.hpp"
#include <cstdlib>//for system clear

std::string check_len(std::string data)
{
//     int i;

//     i=data.length();
    if(data.length() > 10)
    {
        data.resize(9);
        data += ".";
    }
    // std::cout<<"checklen"<<std::endl;
    // std::cout<<data<<std::endl;
    return(data);
}

int main()
{
    Phone_Book  Phone;
    std::string command;
    Phone.count = 0;
    int search_index;

    while (1)
    {
        // system("clear");
        std::cout << std::endl;
        std::cout << "COMMANDS" <<std::endl;
		std::cout << "1	ADD" <<std::endl;
		std::cout << "2	SEARCH" <<std::endl;
		std::cout << "3	EXIT" <<std::endl;
		std::cin >> command;
        std::cout << command<<std::endl;

        if (command=="1" || command == "ADD")
        {
            std::cout << "PLEASE ADD CONTACTS" << std::endl;
            if (Phone.count == 8)
            {
                for (int i = 1; i < Phone.count; i++)
                    Phone.Contacts[i-1] = Phone.Contacts[i];
                Phone.count--;
            }
            std::cout << "PLEASE ENTER THE FIRST NAME" << std::endl;
            //std::ws is a manipulator used with the input stream (std::cin) to skip leading whitespace characters (such as spaces, tabs, and newlines)
            std::getline(std::cin >> std::ws, Phone.Contacts[Phone.count].First_Name);
            while(Phone.Contacts[Phone.count].First_Name.empty())
            {
                std::cout<<"empty value so add again"<<std::endl;
                std::getline(std::cin >> std::ws, Phone.Contacts[Phone.count].First_Name);
            }
            // system("clear");

            std::cout << "PLEASE ENTER THE LAST NAME" << std::endl;
            std::getline(std::cin >> std::ws, Phone.Contacts[Phone.count].Last_Name);
            while(Phone.Contacts[Phone.count].Last_Name.empty())
            {
                std::cout<<"empty value so add again"<<std::endl;
                std::getline(std::cin >> std::ws, Phone.Contacts[Phone.count].Last_Name);
            }
            // system("clear");

            std::cout << "PLEASE ENTER THE NICK NAME" << std::endl;
            std::getline(std::cin >> std::ws, Phone.Contacts[Phone.count].Nickname);
            while(Phone.Contacts[Phone.count].Nickname.empty())
            {
                std::cout<<"empty value so add again"<<std::endl;
                std::getline(std::cin >> std::ws, Phone.Contacts[Phone.count].Nickname);
            }
            // system("clear");

            std::cout << "PLEASE ENTER THE Phone_Number" << std::endl;
            std::getline(std::cin >> std::ws, Phone.Contacts[Phone.count].Phone_Number);
            while(Phone.Contacts[Phone.count].Phone_Number.empty())
            {
                std::cout<<"empty value so add again"<<std::endl;
                std::getline(std::cin >> std::ws, Phone.Contacts[Phone.count].Phone_Number);
            }
            // system("clear");

            std::cout << "PLEASE ENTER THE Darkest Secret" << std::endl;
            std::getline(std::cin >> std::ws, Phone.Contacts[Phone.count].Darkest_Secret);
            while(Phone.Contacts[Phone.count].Darkest_Secret.empty())
            {
                std::cout<<"empty value so add again"<<std::endl;
                std::getline(std::cin >> std::ws, Phone.Contacts[Phone.count].Darkest_Secret);
            }
            // system("clear");
            
            Phone.count++;



        }
        else if (command=="2" || command == "SEARCH")
        {

            // system("clear");
            // std::cout << std::right << std::setw(10) << Phone.count << "|";
			std::cout << std::right << "|";
            std::cout << std::right << std::setw(10) << "INDEX" << "|";
            std::cout << std::right << std::setw(10) << "FIRST NAME" << "|";
			std::cout << std::right << std::setw(10) << "LAST NAME" << "|";
			std::cout << std::right << std::setw(10) << "NICKNAME" << "|" <<std::endl;

            for (int i = 0;i<Phone.count;i++)
            {
                std::cout << std::right << "|";
                std::cout << std::right << std::setw(10) << i+1 <<"|";
                std::cout << std::right << std::setw(10) << check_len(Phone.Contacts[i].First_Name)<<"|";
                std::cout << std::right << std::setw(10) << check_len(Phone.Contacts[i].Last_Name)<<"|";
                std::cout << std::right << std::setw(10) << check_len(Phone.Contacts[i].Nickname)<<"|"<<std::endl;
            }
            std::cout << "PLEASE ENTER AN INDEX" <<std::endl;
			std::cin >> search_index;
			search_index--;

            system("clear");
            if(search_index >= 0 && search_index < Phone.count)
            {
                std::cout<<std::endl;
                std::cout<<"FIRST NAME      :"<<Phone.Contacts[search_index].First_Name<<std::endl;
                std::cout<<"LAST NAME       :"<<Phone.Contacts[search_index].Last_Name<<std::endl;
                std::cout<<"NICK NAME       :"<<Phone.Contacts[search_index].Nickname<<std::endl;
                std::cout<<"PHONE NO        :"<<Phone.Contacts[search_index].Phone_Number<<std::endl;
                std::cout<<"DARKEST SECRET  :"<<Phone.Contacts[search_index].Darkest_Secret<<std::endl;
                std::cout<<std::endl;
            }
            else
                std::cout<<"*INVALID INDEX*"<<std::endl;
            std::cout<<std::endl;
        }
        else if (command=="3" || command == "EXIT")
        {
            break;
        }
    }
    return(0);
}