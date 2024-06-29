#include <string>

#include "Zombie.hpp"

Zombie* zombie_horde(int n, const std::string& name);

int main()
{
    const int size = 10;

    const Zombie* zombies = zombie_horde(size, "Pedro");
    for (int i = 0; i < size; ++i)
        zombies[i].announce();
    delete[] zombies;
}
