/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:03:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/12 16:35:41 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "This is the default constructor for Weapon" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "This is the default constructor " << this->_type << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Destroying " << this->_type << std::endl;
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
