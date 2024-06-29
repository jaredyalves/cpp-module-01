#include <string>

#include "Zombie.hpp"

void random_chump(const std::string& name)
{
    const Zombie zombie = Zombie(name);

    zombie.announce();
}
