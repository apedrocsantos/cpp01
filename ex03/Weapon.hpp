/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:48:52 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/15 18:45:38 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>
#include <iostream>

class Weapon
{
	std::string _type;

public:
	Weapon(std::string type);
	std::string const &getType(void);
	void setType(std::string string);
};

#endif
