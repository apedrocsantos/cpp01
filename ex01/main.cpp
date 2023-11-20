/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:12:39 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/19 08:05:02 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    int i = 1;
    // int nb = 10;
    
    Zombie *zombie = zombieHorde(10, "Manel");
    // while (++i < nb)
    // {
        zombie[i].announce();
        std::cout << i << '\n';
    // }
}