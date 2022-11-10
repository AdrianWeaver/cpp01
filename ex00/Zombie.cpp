/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:45:11 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/10 12:47:34 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "This is the default Zombie constructor" << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " killed!" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
