/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:25:06 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/26 15:52:20 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	std::string line;
	if (ac != 4)
	{
		std::cout << "invalid number of arguments. Try again.\n";
		return 0;
	}
	std::ifstream ifs(av[1]);
	if (!ifs)
	{
		std::cout << "invalid file. Try again.\n";
		return 0;
	}
	while (!ifs.eof())
		std::cout << ifs.getline();
	// 	std::getline(std::cin, line);
	ifs.close();

}
