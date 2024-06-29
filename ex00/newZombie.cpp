#include "Zombie.hpp"

Zombie* new_zombie(const std::string& name)
{
    Zombie* zombie = new Zombie(name);

    return zombie;
}
