/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <fvaliyak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:14:03 by fvaliyak          #+#    #+#             */
/*   Updated: 2024/03/17 14:32:56 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <algorithm>

# define RESET_COLOR	"\033[0m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"


class Zombie
{
	private:
		std::string named;

	public:
		Zombie(void);
		// Zombie(std::string name);
		~Zombie();
		void announce();
		void set_name(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );



# endif