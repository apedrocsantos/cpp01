/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:27:47 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/19 06:38:59 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h" 

void randomChump (std::string name)
{
    Zombie newZombie(name);
    newZombie.announce();
}