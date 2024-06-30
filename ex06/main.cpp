#include <iostream>

#include "Harl.hpp"

int main(const int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        return 1;
    }

    const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (levels[i] == argv[1])
            break;
        i++;
    }

    Harl harl;
    switch (i)
    {
    case 0:
        harl.complain("DEBUG");
        break;
    case 1:
        harl.complain("INFO");
        break;
    case 2:
        harl.complain("WARNING");
        break;
    case 3:
        harl.complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
