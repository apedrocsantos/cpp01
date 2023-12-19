/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:52:53 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/15 18:45:35 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type) {
	return;
};

std::string const &Weapon::getType(void) {
	return (this->_type);
}

void Weapon::setType(std::string string) {
	std::cout << "changing type to " << string << "\n";
	this->_type = string;
}
