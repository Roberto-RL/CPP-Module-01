/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:06:47 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/02 10:54:56 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie *nZombie = newZombie("Jhonny");
	nZombie->announce();
	randomChump("nooooooo");
	delete nZombie;
	return(0);
}
