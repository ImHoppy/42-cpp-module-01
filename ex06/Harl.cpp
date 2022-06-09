#include "Harl.hpp"

Harl::Harl(void)
{}
Harl::~Harl(void)
{}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."<< std::endl
	<< "I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."<< std::endl
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."<< std::endl
	<< "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

int		Harl::getIndex(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < sizeof(levels)/sizeof(std::string); i++)
	{
		if (level == levels[i])
			return (i);
	}
	return (-1);
}

void	Harl::complain(std::string level)
{
	enum {DEBUG, INFO, WARNING, ERROR};
	int		index = getIndex(level);

	switch (index)
	{
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}
