/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 01:29:41 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/04 02:41:19 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"

/*
DiamondTrap::DiamondTrap(std::string name): FragTrap(name + "_clap_name")
{
	this->_name = name;
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setHitPoints(FragTrap::getHitPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap Constructor of " << this->getName() <<" called." << std::endl;
	
}
*/

DiamondTrap::DiamondTrap(std::string name): FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	this->_name = name;
	this->ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	this->ScavTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap Constructor of " << this->_name<<" called." << std::endl;
	
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name <<" Destructor called." << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->_name << "." << std::endl;
	std::cout << "ClapTrap name: " << this->ScavTrap::getName() << "." << std::endl;

}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}