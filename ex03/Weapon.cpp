/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:23:31 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/10 19:35:20 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
}
Weapon::~Weapon(void)
{
}

const std::string& Weapon::getType(void)
{
    return(this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}