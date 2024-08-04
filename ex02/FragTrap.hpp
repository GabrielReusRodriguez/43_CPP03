/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 00:48:10 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/04 01:08:11 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>

# include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap(std::string name);
		~FragTrap(void);
		void	highFivesGuys(void);
};

#endif