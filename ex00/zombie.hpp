/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:08:50 by rrimonte          #+#    #+#             */
/*   Updated: 2024/05/26 18:42:18 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class  Zombie {
public:
	// Constructores
	 Zombie(std::string	name); // Constructor por defecto
	~ Zombie(); // Destructor

	// Métodos
	void announce( void );
private:
	//	Atributos
	std::string	name;
};

#endif