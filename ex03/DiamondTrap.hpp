#ifndef EX02_DIAMOND_TRAP_HPP_INCLUDED
#define EX02_DIAMOND_TRAP_HPP_INCLUDED

#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
  std::string name;

public:
  DiamondTrap(std::string name = "<name>", unsigned int hitPoint = 100,
              unsigned int energyPoint = 50, unsigned int attackDamage = 30);
  ~DiamondTrap();
  DiamondTrap(const DiamondTrap &copy);
  DiamondTrap &operator=(const DiamondTrap &copy);

  void whoAmI();
};

#endif
