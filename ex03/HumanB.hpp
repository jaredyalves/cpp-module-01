#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon _weapon;

public:
    explicit HumanB(const std::string& name);

    void setWeapon(const Weapon& weapon);

    void attack() const;

private:
    HumanB();
};

#endif //HUMANB_HPP
