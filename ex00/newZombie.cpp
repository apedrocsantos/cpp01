/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:27:45 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/19 06:40:33 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h" 

Zombie *newZombie (std::string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}