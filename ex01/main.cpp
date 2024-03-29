/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:12:39 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/25 12:54:36 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    int i = -1;
    int nb = 10;

    Zombie *zombieH = zombieHorde(10, "Carlos");
    while (++i < nb)
    {
        std::cout << i << ": ";
        zombieH[i].announce();
    }
    delete [] zombieH;

}
