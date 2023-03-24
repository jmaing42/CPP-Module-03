#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(std::string name, unsigned int hitPoint,
                         unsigned int energyPoint, unsigned int attackDamage)
    : ClapTrap(name + "_clap_name", hitPoint, energyPoint, attackDamage),
      name(name) {
  std::cout << "DiamondTrap " << this->name << " constructed" << std::endl;
}
DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << this->name << " destructed" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
    : ClapTrap(copy.name, copy.hitPoint, copy.energyPoint, copy.attackDamage) {
  std::cout << "DiamondTrap " << this->name << " copy constructed" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy) {
  this->name = copy.name;
  this->ClapTrap::name = copy.ClapTrap::name;
  this->hitPoint = copy.hitPoint;
  this->energyPoint = copy.energyPoint;
  this->attackDamage = copy.attackDamage;
  return *this;
}

void DiamondTrap::whoAmI() {
  std::cout << "name of DiamondTrap is " << this->name << std::endl;
  std::cout << "name of FragTrap is " << this->FragTrap::name << std::endl;
  std::cout << "name of ScavTrap is " << this->ScavTrap::name << std::endl;
  std::cout << "name of ClapTrap is " << this->ClapTrap::name << std::endl;
}
