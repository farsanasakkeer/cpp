/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <fvaliyak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:46:30 by fvaliyak          #+#    #+#             */
/*   Updated: 2024/03/17 13:08:46 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define RESET_COLOR	"\033[0m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"

class Zombie
{
	private:
		std::string named;
		void announce();

	public:
		Zombie(std::string name);
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

# endif