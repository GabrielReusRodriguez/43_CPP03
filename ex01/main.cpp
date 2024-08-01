/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:47:41 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/01 23:42:33 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	/*
	ClapTrap	clap("Gabriel");

	clap.attack("ClapTrap1");
	clap.takeDamage(4);
	clap.beRepaired(10);
	clap.takeDamage(50);
	clap.attack("ClapTrap2");
	clap.attack("ClapTrap3");
	clap.beRepaired(10);
	clap.beRepaired(1);
	clap.attack("ClapTrap4");
	clap.attack("ClapTrap5");
	clap.attack("ClapTrap6");
	clap.attack("ClapTrap7");
	clap.beRepaired(10);
*/
	ScavTrap	clap("Gabriel");

	clap.attack("ClapTrap1");
	clap.takeDamage(4);
	clap.beRepaired(10);
	clap.takeDamage(50);
	clap.attack("ClapTrap2");
	clap.attack("ClapTrap3");
	clap.beRepaired(10);
	clap.beRepaired(1);
	clap.attack("ClapTrap4");
	clap.attack("ClapTrap5");
	clap.attack("ClapTrap6");
	clap.attack("ClapTrap7");
	clap.beRepaired(10);


	return (0);
}
