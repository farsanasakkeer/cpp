#include "Harl.hpp"

Harl::Harl()
{

}

Harl:: ~Harl()
{

}

void Harl::complain(std::string level)
{
    int i;
    void (Harl::*fns[4])(void) = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error
        };
    std::string input[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(i=0; i<4 ; i++)
    {
        if (input[i] == level)
        {
            break;
        }
    }

    switch(i)
    {
        case 0:
            (this->*fns[i])();
            i++;
            //fall through
        case 1:
            (this->*fns[i])();
            i++;
            // fall through
        case 2:
            (this->*fns[i])();
            i++;
            // fall through
        case 3:
            (this->*fns[i])();
            i++;
            break;
        default:
		    std::cout <<RED << "Please enter a level | DEBUG | INFO | WARNING | ERROR |" <<RESET_COLOR<< std::endl;
        
    }
}

void Harl::debug( void )
{
	std::cout <<YELLOW << "Debug : \nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do! "<< RESET_COLOR <<std::endl;
}

void Harl::info( void )
{
	std::cout <<GREEN << "Info : \nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! " << RESET_COLOR<< std::endl;
}

void Harl::warning( void )
{
	std::cout<< BLUE << "Warning : \nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month. " << RESET_COLOR << std::endl;
}

void Harl::error( void )
{
	std::cout << PINK << "Error : \nThis is unacceptable! I want to speak to the manager now. "<< RESET_COLOR << std::endl;
}