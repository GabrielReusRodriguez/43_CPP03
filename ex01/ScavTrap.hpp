/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 22:58:30 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/01 23:58:54 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCATRAP_HPP

# include <string>

# include "ClapTrap.hpp"

/*
Public inheritance does the public member public and protected protected

Protected does the public methods and protected as proteced
Private does the public and protected stuff protected.

*/
class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(std::string _name);
		~ScavTrap(void);
		void	attack(const std::string& target);
		void	guardGate(void);


};


#endif