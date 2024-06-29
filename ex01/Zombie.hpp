#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
    std::string _name;

public:
    Zombie();

    explicit Zombie(const std::string& name);

    ~Zombie();

    void announce() const;
};

#endif //ZOMBIE_HPP
