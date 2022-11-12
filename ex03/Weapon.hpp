/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:03:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/12 16:24:47 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon
{
	public:
		Weapon(std::string name);
		~Weapon(void);
		const std::string&	getType(void);
		void				setType(std::string type);
	protected:
	private:
		Weapon(void);
		std::string	_type;
};
#endif
