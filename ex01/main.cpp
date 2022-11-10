/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:21:58 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/10 15:06:27 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie normy("Normal zombie");
	Zombie *horde_of_zombies;

	horde_of_zombies = zombieHorde(8, "boris");
	for (int i = 0; i < 8; i++)
		horde_of_zombies[i].announce();
	std::cout << "before deleting zombies" << std::endl;
	delete[](horde_of_zombies);
	std::cout << "after deleting zombies" << std::endl;
	return (0);
}
