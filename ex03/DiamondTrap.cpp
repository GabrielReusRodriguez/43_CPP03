/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 01:29:41 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/05 22:16:27 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	this->_name = name;
	this->setEnergyPoints(SCAVTRAP_DEFAULT_ENERGYPOINTS);
	this->setHitPoints(FRAGTRAP_DEFAULT_HITPOINTS);
	this->setAttackDamage(FRAGTRAP_DEFAULT_ATTACKDAMAGE);
	std::cout << "DiamondTrap Constructor of " << this->_name<<" called." << std::endl;
	
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name <<" Destructor called." << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->_name << "." << std::endl;
	std::cout << "ClapTrap name: " << this->ClapTrap::getName() << "." << std::endl;

}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}