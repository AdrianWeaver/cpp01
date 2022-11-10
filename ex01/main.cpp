/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:21:58 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/10 14:37:07 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *horde_of_zombies;

	horde_of_zombies = zombieHorde(8, "boris");
	std::cout << "I didn't segfault" << std::endl;
	for (int i = 0; i < 8; i++)
		horde_of_zombies[i].announce();
	delete[](horde_of_zombies);
	return (0);
}
