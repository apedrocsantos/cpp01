/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:50:50 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/19 07:10:32 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <string>
#include <iomanip>
#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce (void);

    private:
        std::string _name;
};

# endif