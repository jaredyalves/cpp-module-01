#include <string>

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    const int size = 10;

    const Zombie* zombies = zombieHorde(size, "Pedro");
    for (int i = 0; i < size; ++i)
        zombies[i].announce();
    delete[] zombies;
}
