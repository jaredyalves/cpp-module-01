#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void randomChump(std::string name);

int main()
{
    const Zombie* marcos = newZombie("Marcos");
    marcos->announce();
    delete marcos;

    const Zombie* lucas = newZombie("Lucas");
    lucas->announce();
    delete lucas;

    randomChump("Marcos Reborn");
    randomChump("Lucas Reborn");
}
