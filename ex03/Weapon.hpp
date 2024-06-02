/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:23:34 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/02 12:37:47 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class  Weapon {
public:
	// Constructores
	  Weapon(std::string type);
	~ Weapon(); // Destructor

	// Métodos
    const std::string& getType(void);
	void setType(std::string type);
	
private:
	//	Atributos
	std::string	type;
};

#endif