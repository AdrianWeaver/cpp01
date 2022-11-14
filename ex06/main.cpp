/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:16:33 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/14 14:15:25 by aweaver          ###   ########.fr       */
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
	//this is the previous test case
	std::cerr << "Using complain" << std::endl;
	harl.complain(argv[1]);
	//this is the filter version
	std::cerr << "Using filter" << std::endl;
	harl.filter(argv[1]);
	harl.filter("this doesn't exist");
	harl.filter("Debug");
	harl.filter("DEBUG");
	harl.filter("ERROR");
	harl.filter("WARNING");
	return (0);
}

