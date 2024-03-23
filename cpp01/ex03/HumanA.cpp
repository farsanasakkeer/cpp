#include "HumanA.hpp"
#include "weapon.hpp"

HumanA::HumanA(std::string a_human,Weapon &weapon): a_human(a_human), weapon(weapon)
{
    std::cout<<a_human<<" created with "<<weapon.getType()<<std::endl;
}
HumanA::~HumanA(void)
{
    std::cout<<a_human<<" destroyed "<<std::endl;
}

void HumanA::attack()
{
    std::cout<<a_human<<" attacked with "<<weapon.getType()<<std::endl;
}

