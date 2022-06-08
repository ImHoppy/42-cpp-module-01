#include "Zombie.hpp"

int	main(void)
{
	{
		std::cout << std::endl << "Bob is allocated on the heap." << std::endl;
		Zombie	zombie("Bob");
		zombie.announce();
	}
	{
		std::cout << std::endl << "Paul is allocated on the stack with newZombie." << std::endl;
		Zombie *zombie = newZombie("Paul");
		zombie->announce();
		delete zombie;
	}
	{
		std::cout << std::endl << "John is allocated on the heap with randomChump." << std::endl;
		randomChump("John");
	}
}