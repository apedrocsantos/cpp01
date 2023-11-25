/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:39:08 by anda-cun          #+#    #+#             */
/*   Updated: 2023/11/25 13:44:22 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << &string << "\t" << stringPTR << "\t" << &stringREF << "\n";
	std::cout << string << "\t" << *stringPTR << "\t" << stringREF << "\n";
	return (0);
}
