/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:54:11 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/25 12:58:42 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "A zombie is born\n";
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

void Zombie::setName(std::string name)
{
    this->_name = name;
}
