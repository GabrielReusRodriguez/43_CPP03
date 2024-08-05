/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 00:56:03 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/05 22:17:46 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "FragTrap.hpp"


FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	this->setAttackDamage(FRAGTRAP_DEFAULT_ATTACKDAMAGE);
	this->setEnergyPoints(FRAGTRAP_DEFAULT_ENERGYPOINTS);
	this->setHitPoints(FRAGTRAP_DEFAULT_HITPOINTS);	
	std::cout << "FragTrap Constructor of " << this->getName() <<" called." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor of " << this->getName() << " called." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->getEnergyPoints() > 0)
		std::cout << "FragTrap " << this->getName() << " request highFive!" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is OUT of energy. "<< std::endl;
}
