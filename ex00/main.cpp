#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void randomChump(std::string name);

int main()
{
    {
        const Zombie* marcos = newZombie("Marcos");
        marcos->announce();
        delete marcos;
    }
    {
        randomChump("Marcos");
    }
}
