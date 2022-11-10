/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:44:31 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/10 12:47:22 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie *target_1;

	target_1 = newZombie("Mitch");
	randomChump("noname");

	target_1->announce();
	delete(target_1);
	return (0);
}
