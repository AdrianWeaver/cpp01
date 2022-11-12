/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:03:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/12 17:05:10 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"
#include <string>

class HumanB
{
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon *weapon);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
	protected:

	private:
		HumanB(void);
		std::string _name;
		Weapon *_weapon;
};

#endif
