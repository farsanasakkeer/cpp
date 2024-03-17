/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <fvaliyak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:20:40 by fvaliyak          #+#    #+#             */
/*   Updated: 2024/03/17 13:07:27 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->named = name;
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << YELLOW << this->named << RED << " is destroyed" << RESET_COLOR << std::endl;
}

void Zombie::announce()
{
	std::cout << YELLOW << this->named << GREEN << ": BraiiiiiiinnnzzzZ..." << RESET_COLOR << std::endl;
}