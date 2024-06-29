#include "HumanB.hpp"

#include <iostream>
#include <string>

HumanB::HumanB() {}

HumanB::HumanB(const std::string& name): _name(name), _weapon("hands") {}

void HumanB::setWeapon(const Weapon& weapon)
{
    _weapon = weapon;
}

void HumanB::attack() const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
