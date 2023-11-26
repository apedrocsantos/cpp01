/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:46:42 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/26 15:13:36 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"


HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	std::cout << &weapon << "\n";
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void HumanA::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "\n";
}
