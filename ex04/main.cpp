/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:25:06 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/16 19:22:53 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	int pos;
	std::string filename;
	std::string s1;
	std::string s2;
	std::string line;

	if (ac != 4)
	{
		std::cout << "invalid number of arguments. Try again.\n";
		return 0;
	}
	pos = 0;
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
		pos = line.find(s1, 0);
		while (pos != -1)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		ofs << line;
		if (ifs.eof())
			break;
		ofs << "\n";
	}
	ifs.close();
	ofs.close();
}
