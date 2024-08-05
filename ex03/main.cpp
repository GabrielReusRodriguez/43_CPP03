/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:47:41 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/05 21:27:28 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
-Wshadow
    Warn whenever a local variable or type declaration shadows another variable, parameter, 
	type, class member (in C++), or instance variable (in Objective-C) or whenever a built-in 
	function is shadowed. Note that in C++, the compiler warns if a local variable shadows an explicit 
	typedef, but not if it shadows a struct/class/enum. If this warning is enabled, it includes also all 
	instances of local shadowing. This means that -Wno-shadow=local and -Wno-shadow=compatible-local are 
	ignored when -Wshadow is used. Same as -Wshadow=global.

*/

//#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	clap("Gabriel");

	clap.whoAmI();
	std::cout << "HitPoitns of DiamondTrap is: " << clap.getHitPoints() << std::endl;
	std::cout << "Energy of DiamondTrap is: " << clap.getEnergyPoints() << std::endl;
	std::cout << "Attrack Damage of DiamondTrap is: " << clap.getAttackDamage() << std::endl;
	

	clap.attack("ClapTrap1");
	clap.beRepaired(10);
	clap.takeDamage(50);
	clap.attack("ClapTrap2");
	clap.attack("ClapTrap3");
	clap.highFivesGuys();
	clap.beRepaired(10);
	std::cout << "Energy of Diamondtrap is: " << clap.getEnergyPoints() << std::endl;
	return (0);
}
