/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 23:11:44 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/01 23:50:54 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	this->hit_points = 100;
	this->energy_points= 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap Constructor of " << this->name <<" called." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor of " << this->name << " called." << std::endl;	
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points > 0)
	{
		this->energy_points--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " has NOT energy points to attack!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}