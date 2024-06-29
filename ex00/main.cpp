#include "Zombie.hpp"

Zombie* new_zombie(const std::string& name);

void random_chump(const std::string& name);

int main()
{
    const Zombie* marcos = new_zombie("Marcos");
    marcos->announce();
    delete marcos;

    const Zombie* lucas = new_zombie("Lucas");
    lucas->announce();
    delete lucas;

    random_chump("Marcos Reborn");
    random_chump("Lucas Reborn");
}
