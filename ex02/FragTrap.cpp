#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name, unsigned int hitPoint,
                   unsigned int energyPoint, unsigned int attackDamage)
    : ClapTrap(name, hitPoint, energyPoint, attackDamage) {
  std::cout << "FragTrap " << this->name << " constructed" << std::endl;
}
FragTrap::~FragTrap() {
  std::cout << "FragTrap " << this->name << " destructed" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy)
    : ClapTrap(copy.name, copy.hitPoint, copy.energyPoint, copy.attackDamage) {
  std::cout << "FragTrap " << this->name << " copy constructed" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &copy) {
  this->name = copy.name;
  this->hitPoint = copy.hitPoint;
  this->energyPoint = copy.energyPoint;
  this->attackDamage = copy.attackDamage;
  return *this;
}

void FragTrap::highFivesGuys() {
  if (!this->hitPoint)
    return;
  std::cout << "FragTrap " << this->name << " requested High Five!"
            << std::endl;
}
