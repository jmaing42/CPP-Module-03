#ifndef EX02_FRAG_TRAP_HPP_INCLUDED
#define EX02_FRAG_TRAP_HPP_INCLUDED

#include <string>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
  FragTrap(std::string name = "<name>", unsigned int hitPoint = 100,
           unsigned int energyPoint = 100, unsigned int attackDamage = 30);
  ~FragTrap();
  FragTrap(const FragTrap &copy);
  FragTrap &operator=(const FragTrap &copy);

  void highFivesGuys();
};

#endif
