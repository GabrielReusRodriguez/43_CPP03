/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:47:41 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/04 02:19:21 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	clap("Gabriel");

	clap.whoAmI();
	clap.attack("ClapTrap1");
	clap.FragTrap::takeDamage(4);
	clap.FragTrap::beRepaired(10);
	clap.FragTrap::takeDamage(50);
	clap.attack("ClapTrap2");
	clap.attack("ClapTrap3");
	clap.highFivesGuys();
	clap.FragTrap::beRepaired(10);
	clap.FragTrap::beRepaired(1);
	clap.attack("ClapTrap4");
	clap.attack("ClapTrap5");
	clap.attack("ClapTrap6");
	clap.attack("ClapTrap7");
	clap.FragTrap::beRepaired(10);


	return (0);
}
