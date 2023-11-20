/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:54:11 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/19 07:10:28 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>
#include <iostream>
#include <string>

Zombie::Zombie(std::string name)
{
    this->_name = name;
    return;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(void)
{
    std::cout << "Destroying " << this->_name << '\n';
}