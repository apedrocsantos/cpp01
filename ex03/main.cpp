/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:38:23 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/26 15:20:36 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int main()
{
	{
		Weapon club = Weapon("machadinha");
		std::cout << &club << "\n";
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("gaita de foles");club.setType("gaita de foles");
		bob.attack();
	}
	{
		Weapon club = Weapon("moca");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("naifa");
		jim.attack();
	}
	return 0;
}
