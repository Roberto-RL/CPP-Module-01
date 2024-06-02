/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:06:47 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/02 11:51:27 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	int x = 5;
	Zombie *nZombie = zombieHorde(x, "Jhonny");
	for(int i = 0; i < x; i++)
		nZombie->announce();
	delete [] nZombie;
	return(0);
}
