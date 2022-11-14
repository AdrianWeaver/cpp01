/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:12:19 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/14 08:46:34 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	ft_replace(std::string &str, std::string toFind, std::string toInsert)
{
	size_t	index;
	size_t	toFindLen;

	toFindLen = toFind.length();
	do
	{
		index = str.find(toFind, toFindLen);
		if (index != std::string::npos)
		{
			str.erase(index, toFindLen);
			str.insert(index, toInsert);
		}
	}	while (index != std::string::npos);
}

int	main(int argc, char **argv)
{
	std::string		buffer;
	std::ifstream	inputfile;
	std::ofstream	outputfile;
	std::string		outputname;
	std::string		replace = ".replace";

	if (argc != 4)
	{
		std::cerr << "Usage <filename> <string_to_search> <string_to_replace>"
			<< std::endl;
		return (0);
	}
	inputfile.open(argv[1], std::ifstream::in);
	if (inputfile.peek() == EOF)
	{
		std::cerr << "Invalid file given" << std::endl;
		return (0);
	}
	outputname = argv[1];
	outputfile.open(outputname.append(replace).c_str(), std::ofstream::out | std::ofstream::app);
	while (!inputfile.eof())
	{
		std::getline(inputfile, buffer);
		std::cout << buffer << std::endl;
		ft_replace(buffer, argv[2], argv[3]);
		outputfile << buffer;
		if (!inputfile.eof())
			outputfile << std::endl;
	}
	outputfile.close();
	inputfile.close();
	std::cout << "closing the program" << std::endl;
	return (0);
}
