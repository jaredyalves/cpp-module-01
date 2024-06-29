#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
    std::string _name;

public:
    explicit Zombie(const std::string& name);

    Zombie();

    ~Zombie();

    void announce() const;
};

#endif //ZOMBIE_HPP
