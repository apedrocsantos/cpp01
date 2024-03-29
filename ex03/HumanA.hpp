/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:32:21 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/15 18:50:56 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"
#include <iostream>
#include <iomanip>

class HumanA
{
	std::string _name;
	Weapon & _weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void attack(void);
};

#endif
