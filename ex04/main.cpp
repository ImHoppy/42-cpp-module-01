

#include <string>
#include <iostream>
#include <fstream>

bool	ft_replace(std::string filename, std::string to_replace, std::string replace_by)
{
	std::ifstream	input;
	std::ofstream	output;

	input.open(filename.c_str());
	if (input.is_open() && input.good())
		output.open((filename + ".replace").c_str());
	else
		return (1);
	if (input.is_open() && input.good() && output.is_open() && output.good())
	{
		std::string		line;
		while (getline(input, line))
		{
			size_t			pos = 0;
			while ((pos = line.find(to_replace, pos)) != std::string::npos)
			{
				line.erase(pos, to_replace.length());
				line.insert(pos, replace_by);
				pos += replace_by.length();
			}
			
			output << line;
			if (!input.eof())
				output << std::endl;

		}
		input.close();
		output.close();
		return (0);
	}
	input.close();
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage: ./sed <filename> <to_replace> <replace_by>" << std::endl;
		return (0);
	}

	std::string		file(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);

	if (s1.length() == 0)
	{
		std::cout << "Error: to_replace is empty" << std::endl;
		return (0);
	}

	if (ft_replace(file, s1, s2))
		std::cout << "Error: can't open file" << std::endl;
	return (0);
}