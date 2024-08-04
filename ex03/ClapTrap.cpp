/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:47:28 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/04 01:06:23 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const name)
{
	this->_name= name;
	this->_energy_points = 10;
	this->_hit_points = 10;
	this->_attack_damage = 0;
	std::cout << "ClapTrap Constructor of " << this->_name <<" called." << std::endl;
}

/*
ClapTrap::ClapTrap(std::string const name): _hit_points(10), _energy_points(10), _attack_damage(0)
{
	this->_name= name;
	std::cout << "ClapTrap Constructor of " << this->_name <<" called." << std::endl;
}
*/

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor of " << this->_name << " called." << std::endl;	
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
	{
		if (this->_hit_points <= 0)
		{
			std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
			return ;
		}
		if (this->_energy_points <= 0)
		{
			std::cout << "ClapTrap " << this->_name << " is out of energy." << std::endl;
			return ;
		}

		std::cout << "ClapTrap " << this->_name << " has NOT energy points to attack!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		this->_hit_points -= amount;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage " << std::endl;
		if (this->_hit_points < 0)
			this->_hit_points = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
	}
}

/*
We get asured that the healing amount does not overpass the 10 default healing
*/
void	ClapTrap::beRepaired(unsigned int amount)
{	
	if (this->_energy_points > 0)
	{
		this->_hit_points += amount;
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " is repaired, getting " << amount << " points healed!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " has NOT energy points to be repaired!" << std::endl;
		return ;
	}
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int			ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

int			ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int			ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

void		ClapTrap::setName(std::string const name)
{
	this->_name = name;
}

void		ClapTrap::setHitPoints(int const hit_points)
{
	this->_hit_points = hit_points;
}

void		ClapTrap::setEnergyPoints(int const energy_points)
{
	this->_energy_points = energy_points;
}

void		ClapTrap::setAttackDamage(int const attack_damage)
{
	this->_attack_damage = attack_damage;
}