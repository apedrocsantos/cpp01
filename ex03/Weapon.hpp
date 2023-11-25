/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:48:52 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/25 13:52:20 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

# include <string>
#include <iomanip>
#include <iostream>
#include <string>

class Weapon {
	std::string type;
public:
	std::string const &getType(void);
	void setType(std::string string);
};

#endif
