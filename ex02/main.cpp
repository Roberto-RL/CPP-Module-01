/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:01:26 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/02 12:10:15 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string name = "HI THIS IS BRAIN";
    std::string *PTR = &name;
    std::string& REF = name;

    std::cout << "memory address: " << &name << std::endl;
    std::cout << "memory address: " << PTR << std::endl;
    std::cout << "memory address: " << &REF << std::endl;
    std::cout << "value: " << name << std::endl;
    std::cout << "value: " << *PTR << std::endl;
    std::cout << "value: " << REF << std::endl;
    return(0);
}