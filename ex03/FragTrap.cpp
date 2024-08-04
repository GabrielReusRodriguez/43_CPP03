/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 00:56:03 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/04 01:16:03 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setAttackDamage(100);
	this->setEnergyPoints(100);
	this->setHitPoints(30);	
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
