/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosantos <pedrosantos@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:26:10 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/11/27 23:50:41 by pedrosantos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int ac, char **av)
{
    Harl harl;
    std::string command;
    int index;
    int i;
    
    index = 4;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    if (ac != 2)
    {
        std::cout << "Wrong arguments\n";
        return (0);
    }
    command = av[1];
    std::transform(command.begin(), command.end(), command.begin(), ::toupper);
    i = -1;
    while (++i < 4)
    {
        if (!command.compare(levels[i]))
        {
            index = i;
            break;
        }
    }
    switch(index)
    {
        case 0:
            harl.complain(levels[0]);
        case 1:
            harl.complain(levels[1]);
        case 2:
            harl.complain(levels[2]);
        case 3:
        {
            harl.complain(levels[3]);
            break;   
        }
        default:
            std::cout << "[ Probably complaining abount insignificant problems ]\n";
    }
    return (0);
}