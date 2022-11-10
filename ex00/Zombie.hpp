/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:45:25 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/10 12:12:26 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);

	protected:
	private:
		Zombie(void);
		std::string	_name;
};

Zombie*	newZombie( std::string name );
void	randomChump(std::string name);
#endif
