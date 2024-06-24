/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:53:20 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/24 20:17:06 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class  Harl 
{
	public:
		Harl(void); // Constructor
		~Harl(void); // Destructor
		void complain(std::string level);

	private:
		void debug(void);
    	void info(void);
    	void warning(void);
    	void error(void);
};

#endif
