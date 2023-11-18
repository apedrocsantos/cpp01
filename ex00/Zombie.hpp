/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:50:50 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/18 19:25:05 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <string>

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