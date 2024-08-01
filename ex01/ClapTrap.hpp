/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:47:02 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/01 23:59:13 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>


# define MAX_HIT_POINTS 10
# define MAX_ENERGY_POINTS 10
# define ATTACK_DAMAGE 0

/* We change The members to protected to access in child class

and we declare the destructor virtual to override in child.
virtual constructor is not allowed.
*/
class ClapTrap
{
	protected:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;

	public:
		ClapTrap(std::string const name);
		~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif