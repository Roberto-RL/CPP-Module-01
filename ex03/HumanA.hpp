/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:23:24 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/02 14:21:50 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
#include "Weapon.hpp"

class  HumanA {
public:
	// Constructores
	  HumanA(std::string name, Weapon &Weapon);
	~ HumanA(); // Destructor

	// Métodos
	void attack(void);
    void get_weapon(Weapon Weapon);
	
private:
	//	Atributos
	std::string	name;
    Weapon      &weapon;
};

#endif