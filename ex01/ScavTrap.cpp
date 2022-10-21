#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name, unsigned int hitPoint,
                   unsigned int energyPoint, unsigned int attackDamage)
    : ClapTrap(name, hitPoint, energyPoint, attackDamage) {
  std::cout << "ScavTrap " << name << " constructed" << std::endl;
}
ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << name << " destructed" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy)
    : ClapTrap(copy.name, copy.hitPoint, copy.energyPoint, copy.attackDamage) {
  std::cout << "ScavTrap " << name << " copy constructed" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
  this->name = copy.name;
  this->hitPoint = copy.hitPoint;
  this->energyPoint = copy.energyPoint;
  this->attackDamage = copy.attackDamage;
  return *this;
}

void ScavTrap::guardGate() {
  if (!this->hitPoint)
    return;
  std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode."
            << std::endl;
}
