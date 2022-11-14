/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:10:10 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/14 14:09:24 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "This is the default constructor for Harl" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "This is the default destructor for Harl" << std::endl;
	return ;
}

void	Harl::filter(std::string level)
{
	int	i;
	std::string category[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (i = 0; i < 4; i++)
		if (level == category[i])
			break;
	switch (i)
	{
		case 0:
			this->_debug();
			// fall through
		case 1:
			this->_info();
			// fall through
		case 2:
			this->_warning();
			// fall through
		case 3:
			this->_error();
			// fall through
			break ;
		default:
			std::cerr << "This error level does not exist" << std::endl;
	}
}
void	Harl::complain(std::string level)
{
	std::string category[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void	(Harl::*funct[])(void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
	for (int i = 0; i < 4; i++)
	{
		if (level == category[i])
		{
			(this->*(funct[i]))();
			return ;
		}
	}
	std::cout << "Harl complains that this complain does not exist." << std::endl;
	return ;
}

void	Harl::_debug(void)
{
	std::cout<< "This is harl complaining of a debug message" << std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout<< "This is harl complaining of an info message" << std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout<< "This is an Harl WARNING message!" << std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout<< "THIS IS AN ERROR MESSAGE!" << std::endl;
	return ;
}
