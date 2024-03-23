#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string.h>
#include "weapon.hpp"

class HumanA
{
    private:
        std::string a_human;
        Weapon      &weapon;

    public:
        HumanA(std::string a_human,Weapon &weapon);
        ~HumanA(void);
        void attack();
        
};

#endif