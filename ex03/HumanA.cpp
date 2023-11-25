/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:46:42 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/25 15:08:42 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon weapon) : _name(name), _weapon(weapon) {
	return;
}

void HumanA::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "\n";
}
