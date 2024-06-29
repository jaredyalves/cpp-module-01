#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(const std::string& name): _name(name) {}

Zombie::Zombie(): _name("Nameless") {}

Zombie::~Zombie()
{
    std::cout << "[DEBUG] " << _name << ": destroyed." << std::endl;
}

void Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
