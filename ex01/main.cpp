#include <iostream>

#include "ScavTrap.hpp"

int main(void) {
  ScavTrap self;
  ScavTrap opponent("opponent");

  self.attack("<target 0>");
  self.attack("<target 1>");
  self.attack("<target 2>");
  self.attack("<target 3>");
  self.attack("<target 4>");
  self.attack("<target 5>");
  self.attack("<target 6>");
  self.attack("<target 7>");
  self.attack("<target 8>");
  self.attack("<target 9>");
  self.attack("<target ?>");
  self.beRepaired(5);
  opponent.beRepaired(5);
  self.takeDamage(66);
  self.takeDamage(66);
  self.guardGate();
  opponent.guardGate();
  opponent.takeDamage(66);
  opponent.takeDamage(66);
  opponent.takeDamage(66);
  opponent.beRepaired(10);
  return 0;
}
