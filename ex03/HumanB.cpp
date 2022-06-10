#include "HumanB.hpp"


HumanB::HumanB(std::string const & name) : _name(name) {}
HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon & weapon) {
	_weapon = &weapon;
}

void	HumanB::attack() {
	if (!_weapon)
		std::cerr << "Error: no weapon provided" << std::endl;
	else
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
