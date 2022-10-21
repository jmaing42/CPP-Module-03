#ifndef EX01_CLAP_TRAP_HPP_INCLUDED
#define EX01_CLAP_TRAP_HPP_INCLUDED

#include <string>

class ClapTrap {
protected:
  std::string name;
  unsigned int hitPoint;
  unsigned int energyPoint;
  unsigned int attackDamage;

public:
  ClapTrap(std::string name = "<name>", unsigned int hitPoint = 10,
           unsigned int energyPoint = 10, unsigned int attackDamage = 0);
  virtual ~ClapTrap();
  ClapTrap(const ClapTrap &copy);
  ClapTrap &operator=(const ClapTrap &copy);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
