/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:08:50 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/02 11:46:44 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class  Zombie {
public:
	// Constructores
	 Zombie(std::string	name); // Constructor por defecto
	  Zombie(void);
	~ Zombie(); // Destructor

	void set_name(std::string name);
	// Métodos
	void announce( void );
	
private:
	//	Atributos
	std::string	name;
};

Zombie* zombieHorde( int N, std::string name );

#endif