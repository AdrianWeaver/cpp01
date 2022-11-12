/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:03:02 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/12 17:05:06 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << "This is the default constructor for HumanB" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "This is the default destructor for " << this->_name
		<< std::endl;
	return ;
}

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "This is the constructor for "
		<< this->_name << std::endl;
	this->_weapon = NULL;
	return ;
}

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name)
{
	std::cout << "This is the name/weapon constructor for "
		<< this->_name << std::endl;
	this->_weapon = weapon;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << ": attacks with their ";
	if (this->_weapon)
		std::cout << this->_weapon->getType() << std::endl;
	else
		std::cout << "bare hands" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}
