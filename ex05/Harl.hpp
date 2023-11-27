/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosantos <pedrosantos@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:11:17 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/11/27 18:11:19 by pedrosantos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __HARL_H__
#define __HARL_H__

#include <string>

class Harl {
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
};

#endif