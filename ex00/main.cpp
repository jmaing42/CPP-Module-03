#include <iostream>

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap self;
  ClapTrap opponent("opponent");

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
  self.takeDamage(6);
  self.takeDamage(6);
  opponent.takeDamage(6);
  opponent.takeDamage(6);
  opponent.takeDamage(6);
  opponent.beRepaired(10);
  return 0;
}
