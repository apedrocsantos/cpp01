/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 06:44:44 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/19 08:20:52 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *zombieHorde(int N, std::string name)
{
    int i = -1;
    if (N < 0)
        return (NULL);
    Zombie *zombieHorde = new Zombie[N];
    while (++i < N)
        zombieHorde[i]._name = name;
    return (zombieHorde);
}