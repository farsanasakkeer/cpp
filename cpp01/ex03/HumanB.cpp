#include "HumanB.hpp"
#include "weapon.hpp"

HumanB::HumanB(std::string b_human): b_human(b_human),bweapon(NULL)
{
    std::cout<<b_human<<" created without weapon"<<std::endl;
}

HumanB::~HumanB(void)
{
    std::cout<<b_human<<" destroyed "<<std::endl;
}

void HumanB::attack()
{
    std::cout<<b_human<<" attacked with "<<bweapon->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->bweapon=&weapon;
}
