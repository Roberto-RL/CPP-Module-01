/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:19:01 by rrimonte          #+#    #+#             */
/*   Updated: 2024/05/26 18:41:47 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *newZombie( std::string name )
{   
    return(new Zombie(name));
}

void randomChump( std::string name )
{
    Zombie zombito = Zombie(name);
    zombito.announce();
}