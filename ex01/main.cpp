#include "Zombie.hpp"

int	main(void)
{
	{
		std::cout << "Creating a horde of Bob" << std::endl;
		Zombie *zombies = zombieHorde(5, "Bob");
		for (int i = 0; i < 5; i++)
		{
			std::cout << "Zombie " << i+1 << ": " << std::endl;
			zombies[i].announce();
		}
		delete [] zombies;
	}
}