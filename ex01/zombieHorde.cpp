#include <string>

#include "Zombie.hpp"

Zombie* zombie_horde(const int n, const std::string& name)
{
    Zombie* zombies = new Zombie[n];

    for (int i = 0; i < n; ++i)
        zombies[i] = Zombie(name);

    return zombies;
}
