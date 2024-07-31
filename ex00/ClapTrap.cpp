/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:47:28 by gabriel           #+#    #+#             */
/*   Updated: 2024/07/31 22:33:03 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const _name): hit_points(MAX_HIT_POINTS), energy_points(MAX_ENERGY_POINTS), attack_damage(ATTACK_DAMAGE)
{
	this->name= _name;
	std::cout << "ClapTrap Constructor of " << this->name <<" called." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor of " << this->name << " called." << std::endl;	
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy_points > 0)
	{
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " has NOT energy points to attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << "ClapTrap " << this->name << " has taken " << amount << " points of damage " << std::endl;
}

/*
We get asured that the healing amount does not overpass the 10 default healing
*/
void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	total_amount;
	
	if (this->energy_points > 0)
	{
		total_amount = MAX_HIT_POINTS - this->hit_points;
		if (total_amount > amount)
			total_amount = amount;
		this->hit_points += total_amount;
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " is repaired, getting " << total_amount << " points healed!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " has NOT energy points to be repaired!" << std::endl;
}
