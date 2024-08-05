/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:14:26 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/05 14:09:23 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <exception>

void	ft_replace(std::string& buffer, std::string s1, std::string s2)
{
	size_t	found = 0;
	
	while (42)
	{
		found = buffer.find(s1);
		if (found == std::string::npos)
			break ;
		buffer.erase(found, s1.length());
		buffer.insert(found, s2);
		found += s2.length();
	}
}

int	main(int ac, char **av)
{
	
		if (ac == 4)
		{
			std::streampos 	size;
			std::string filename = av[1];
			std::string s1 = av[2];
			std::string s2 = av[3];
			std::fstream 	infile;
			std::ofstream outfile(filename + ".replace");

			infile.exceptions(std::ios_base::badbit | std::ios_base::failbit);
			outfile.exceptions(std::ios_base::badbit | std::ios_base::failbit);
			try
			{
				infile.open(filename);
				if (!infile)
					throw std::runtime_error("Failed to open");
				if (!outfile.is_open())
					throw std::invalid_argument("Replace file failed to open");
				infile.seekg(0, std::ios::end);
				size = infile.tellg();
				infile.seekg(0, std::ios::beg);
				std::string	buffer(size, NULL);
				infile.read(&buffer[0], size);
				infile.close();
				ft_replace(buffer, s1, s2);
				outfile << buffer;
				outfile.close();
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		else
		{
			std::cerr << "Invalid argument amount" << std::endl;
			return (1);
		}
}