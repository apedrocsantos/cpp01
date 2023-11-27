/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosantos <pedrosantos@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:26:10 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/11/27 23:52:36 by pedrosantos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(void)
{
    Harl harl;
    harl.complain("debug");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("debuga");
    harl.complain("aaaa");
    harl.complain("");
    return (0);
}