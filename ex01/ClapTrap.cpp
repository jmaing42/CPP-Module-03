#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name, unsigned int hitPoint,
                   unsigned int energyPoint, unsigned int attackDamage)
    : name(name), hitPoint(hitPoint), energyPoint(energyPoint),
      attackDamage(attackDamage) {
  std::cout << "ClapTrap " << name << " constructed" << std::endl;
}
ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << name << " destructed" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
    : name(copy.name), hitPoint(copy.hitPoint), energyPoint(copy.energyPoint),
      attackDamage(copy.attackDamage) {
  std::cout << "ClapTrap " << name << " copy constructed" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
  this->name = copy.name;
  this->hitPoint = copy.hitPoint;
  this->energyPoint = copy.energyPoint;
  this->attackDamage = copy.attackDamage;
  return *this;
}

void ClapTrap::attack(const std::string &target) {
  if (!this->hitPoint)
    return;
  if (!this->energyPoint)
    return;
  std::cout << "ClapTrap " << this->name << " attacks " << target
            << ", causing " << this->attackDamage << " points of damage!"
            << std::endl;
  this->energyPoint--;
}
void ClapTrap::takeDamage(unsigned int amount) {
  if (!this->hitPoint)
    return;
  std::cout << "ClapTrap " << this->name << " takes "
            << (this->hitPoint < amount ? this->hitPoint : amount) << " damage!"
            << std::endl;
  if (this->hitPoint < amount) {
    this->hitPoint = 0;
  } else {
    this->hitPoint -= amount;
  }
}
void ClapTrap::beRepaired(unsigned int amount) {
  if (!this->hitPoint)
    return;
  if (!this->energyPoint)
    return;
  std::cout << "ClapTrap " << this->name << " repairs " << amount << " hp!"
            << std::endl;
  this->hitPoint += amount;
  this->energyPoint--;
}
