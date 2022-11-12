/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:03:02 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/12 16:35:24 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

//HumanA::HumanA(void) : _weapon()
//{
	//std::cout << "This is the default constructor for HumanA" << std::endl;
	//return ;
//}

HumanA::~HumanA(void)
{
	std::cout << "This is the default destructor for " << this->_name
		<< std::endl;
	return ;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "This is the name/weapon constructor for "
		<< this->_name << std::endl;
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << ": attacks with their "
		<< _weapon.getType() << std::endl;
	return ;
}

