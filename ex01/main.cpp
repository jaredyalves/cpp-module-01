#include <string>

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    const int n = 10;

    const Zombie* zombies = zombieHorde(n, "Pedro");
    for (int i = 0; i < n; ++i)
        zombies[i].announce();
    delete[] zombies;
}
