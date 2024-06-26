/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:23:24 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/10 18:56:17 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
#include "Weapon.hpp"

class  HumanB {
public:
	// Constructores
	  HumanB(std::string name);
	~ HumanB(); // Destructor

	// Métodos
	void attack(void);
    void setWeapon(Weapon &weapon);
	
private:
	//	Atributos
	std::string	name;
    Weapon      *weapon;
};

#endif