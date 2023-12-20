/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:26:10 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/15 19:20:31 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    std::string command;
    int index;
    
    index = 4;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    if (ac != 2)
    {
        std::cout << "Wrong arguments\n";
        return (0);
    }
    command = av[1];
    index = 0;
    while (index < 4 && command.compare(levels[index]))
        index++;
    switch(index)
    {
        case 0:
            harl.complain(levels[0]);
            // Intentional fall-through
        case 1:
            harl.complain(levels[1]);
            // Intentional fall-through
        case 2:
            harl.complain(levels[2]);
            // Intentional fall-through
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