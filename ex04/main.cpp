/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosantos <pedrosantos@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:25:06 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/27 18:04:28 by pedrosantos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	int pos;
	std::string filename;
	std::string s1;
	std::string s2;

	pos = 0;
	std::string line;
	if (ac != 4)
	{
		std::cout << "invalid number of arguments. Try again.\n";
		return 0;
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	std::ifstream ifs(filename);
	std::ofstream ofs(filename.append(".replace"));
	if (!ifs)
	{
		std::cout << "invalid file. Try again.\n";
		return 0;
	}
	while (std::getline(ifs, line))
	{
		pos = line.find(av[2], 0);
		while (pos != -1)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + 1);
		}
		ofs << line;
		if (ifs.eof())
			break;
		ofs << "\n";
	}
	ifs.close();
	ofs.close();
}
