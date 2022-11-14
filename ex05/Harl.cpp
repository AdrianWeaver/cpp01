/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:10:10 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/14 09:58:36 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "This is the default constructor for Harl"<< std::endl;
}

Harl::~Harl(void)
{
	std::cout << "This is the default destructor for Harl"<< std::endl;
}

void	Harl::complain(std::string level)
{
	std::string category[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void	(Harl::*funct[])(std::string) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
	i = 0;
	while (i < 4)
	{
		do
		{
			if (std::cin.eof())
			{
				return ;
			}
			std::cout << "What is your " << category[i] << "?" << std::endl;
			std::getline(std::cin, input);
			if (input.empty())
				std::cout << "Please provide something!" << std::endl;
		} while (input.empty());
		(contacts[index].*(funct[i]))(input);
		i++;
	}
	if (this->_total_contacts < 8)
		this->_total_contacts++;
}
