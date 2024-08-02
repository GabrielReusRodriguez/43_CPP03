/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 23:11:44 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/03 00:15:51 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap Constructor of " << this->getName() <<" called." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor of " << this->getName() << " called." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	}
	else
	{
		if (this->getHitPoints() <= 0)
		{
			std::cout << "ScavTrap " << this->getName() << " is dead." << std::endl;
			return ;
		}
		if (this->getEnergyPoints() <= 0)
		{
			std::cout << "ScavTrap " << this->getName() << " is out of energy." << std::endl;
			return ;
		}
	}
}

void	ScavTrap::guardGate(void)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
		std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	else
	{
		if (this->getHitPoints() <= 0)
		{
			std::cout << "ScavTrap " << this->getName() << " is dead." << std::endl;
			return ;
		}
		if (this->getEnergyPoints() <= 0)
		{
			std::cout << "ScavTrap " << this->getName() << " is out of energy." << std::endl;
			return ;
		}
	}
}