/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <fvaliyak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:15:27 by fvaliyak          #+#    #+#             */
/*   Updated: 2024/03/17 14:32:46 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie:: set_name(std::string name)
{
	this->named = name;
}

Zombie::Zombie(void)
{
}

Zombie::~Zombie()
{
	std::cout << YELLOW << this->named << RED << " is destroyed" << RESET_COLOR << std::endl;
}

void Zombie::announce()
{
	std::cout << YELLOW << this->named << GREEN << ": BraiiiiiiinnnzzzZ..." << RESET_COLOR << std::endl;
}