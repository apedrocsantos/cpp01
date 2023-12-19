/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:49:25 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/26 15:22:08 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::attack(void)
{
	if (!this->_weapon)
	{
		std::cout << this->_name << " is unarmed\n";
		return;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
};
