/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <fvaliyak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:21:56 by fvaliyak          #+#    #+#             */
/*   Updated: 2024/03/17 14:33:14 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	if (N < 0)
	{
		std::cout <<RED<< "Invalid number of zombies" <<RESET_COLOR<< std::endl;
		return (NULL);
	}
	Zombie *zombies = new Zombie[N];
	if (zombies == NULL)
	{
		std::cout <<RED<< "Memory allocation failed" <<RESET_COLOR<< std::endl;
		return (NULL);
	}
	for (int i=0;i<N;i++)
	{
		zombies[i].set_name(name);
		zombies[i].announce();
	}
	return (zombies);
}

