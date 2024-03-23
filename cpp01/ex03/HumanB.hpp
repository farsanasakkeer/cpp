#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string.h>
#include "weapon.hpp"

class HumanB
{
    private:
        std::string b_human;
        Weapon      *bweapon;

    public:
        HumanB(std::string b_human);
        ~HumanB(void);
        void attack();
        void setWeapon(Weapon &weapon);

        
};





#endif