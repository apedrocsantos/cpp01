/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:50:50 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/25 09:44:35 by anda-cun         ###   ########.fr       */
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
        Zombie(void);
        ~Zombie(void);
        void announce (void);
        void setName(std::string name);

    private:
        std::string _name;
};

# endif
