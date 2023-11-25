/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:52:53 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/25 14:46:31 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "Weapon.h"

Weapon::Weapon(std::string type) : _type(type) {
	return;
};

std::string const &Weapon::getType(void) {
	return (this->_type);
}

void Weapon::setType(std::string string) {
	this->_type = string;
}
