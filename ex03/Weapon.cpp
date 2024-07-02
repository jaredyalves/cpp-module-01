#include "Weapon.hpp"

#include <string>

Weapon::Weapon(const std::string& type): _type(type) {}

std::string Weapon::getType() const
{
    return _type;
}

void Weapon::setType(const std::string& type)
{
    _type = type;
}
