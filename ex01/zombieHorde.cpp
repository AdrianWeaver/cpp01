/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:57:30 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/10 14:42:23 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		(horde[i]).set_name(name);
	return (horde);
}
