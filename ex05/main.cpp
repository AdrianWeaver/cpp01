/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:16:33 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/14 13:30:54 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "This program takes an alert level as parameter" << std::endl;
		return (0);
	}
	harl.complain(argv[1]);
	harl.complain("this doesn't exist");
	harl.complain("Debug");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain(argv[1]);
	return (0);
}

