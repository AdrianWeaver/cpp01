/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:03:42 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/10 12:38:28 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <new>
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	new_zombie->announce();
	return (new_zombie);
}
