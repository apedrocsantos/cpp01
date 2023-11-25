/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:32:21 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/25 15:09:37 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.h"

class HumanA {
	std::string _name;
	Weapon _weapon;
public:
	HumanA(std::string name, Weapon weapon);
	void attack(void);
};

#endif
