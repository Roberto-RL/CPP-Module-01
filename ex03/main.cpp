/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:23:27 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/02 14:03:45 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
    {
      Weapon club = Weapon("crude spiked club");
      HumanA bob("Bob", club);
      bob.attack();
      club.setType("some other type of club");
      bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}