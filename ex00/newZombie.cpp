/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:27:45 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/18 19:42:30 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 
#include <string>

Zombie *newZombie (std::string name)
{
    Zombie *zombie = new Zombie(name);

    return (zombie);
}