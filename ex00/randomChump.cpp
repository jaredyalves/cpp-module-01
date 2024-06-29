#include <string>

#include "Zombie.hpp"

void randomChump(std::string name)
{
    const Zombie zombie = Zombie(name);

    zombie.announce();
}
