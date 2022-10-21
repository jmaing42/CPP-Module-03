#ifndef EX01_SCAV_TRAP_HPP_INCLUDED
#define EX01_SCAV_TRAP_HPP_INCLUDED

#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  ScavTrap(std::string name = "<name>", unsigned int hitPoint = 100,
           unsigned int energyPoint = 50, unsigned int attackDamage = 20);
  ~ScavTrap();
  ScavTrap(const ScavTrap &copy);
  ScavTrap &operator=(const ScavTrap &copy);

  void guardGate();
};

#endif
