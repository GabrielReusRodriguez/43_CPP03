/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 00:48:10 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/05 22:17:02 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# define FRAGTRAP_DEFAULT_HITPOINTS 100
# define FRAGTRAP_DEFAULT_ENERGYPOINTS 100
# define FRAGTRAP_DEFAULT_ATTACKDAMAGE 30

# include <string>

# include "ClapTrap.hpp"


//We  use  virtual inheratance to ensure only one copy of the object 
class FragTrap : virtual public ClapTrap
{
	private:

	public:
		FragTrap(std::string const name);
		~FragTrap(void);
		void	highFivesGuys(void);
};

#endif