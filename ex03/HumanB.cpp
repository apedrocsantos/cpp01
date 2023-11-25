/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:49:25 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/25 15:03:14 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(void){
	this->_weapon.setType();
	return;
}

void HumanB::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "\n";
}
