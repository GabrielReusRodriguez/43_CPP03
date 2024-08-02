/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:47:02 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/03 00:56:06 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
		const int	_max_hit_points;
		const int	_max_energy_points;

	public:
		ClapTrap(std::string const name);
		~ClapTrap(void);
		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
		void		setName(std::string const name);
		void		setHitPoints(int const hit_points);
		void		setEnergyPoints(int const energy_points);
		void		setAttackDamage(int const attack_damage);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif