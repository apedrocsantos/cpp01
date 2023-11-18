/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:54:11 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/18 19:25:23 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>
#include <iostream>
#include <string>

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "Destroying " << this->_name << '\n';
}