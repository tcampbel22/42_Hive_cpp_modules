/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:14:26 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/01 18:06:28 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	try
	{
		if (ac == 4)
		{
			std::streampos 	size;
			size_t			found;
			std::string filename = av[1];
			std::string s1 = av[2];
			std::string s2 = av[3];
			std::fstream 	fs;
			fs.open(filename);
			if (!fs)
				throw std::runtime_error("Failed to open");
			std::ofstream outfile(filename + ".replace");
			if (!outfile.is_open())
				throw std::invalid_argument("Invalid argument");
			fs.seekg(0, std::ios::end);
			size = fs.tellg();
			fs.seekg(0, std::ios::beg);
			std::string	buffer(size, NULL);
			fs.read(&buffer[0], size);
			fs.close();
			while (42)
			{
				found = buffer.find(s1);
				if (found > buffer.length())
					break ;
				buffer.erase(found, s1.length());
				buffer.insert(found, s2);
			}

			outfile << buffer;
			outfile.close();
		}
		else
		{
			std::cerr << "Invalid input" << std::endl;
			return (1);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}