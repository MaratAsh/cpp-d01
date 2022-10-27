/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <alcierra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 00:00:00 by alcierra          #+#    #+#             */
/*   Updated: 2022/01/01 00:00:00 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main() {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	std::cout<<"\nADDRES OF BRAIN IS:\t\t" << &str << std::endl;
	std::cout<<"POINTER OF BRAIN POINTS TO:\t" << stringPTR << std::endl;
	std::cout<<"BRAIN'S REFERENCE POINTS TO:\t" << &stringREF << std::endl;

	std::cout<< std::endl;

	std::cout<<"VARIABLE:\t\t" << str << std::endl;
	std::cout<<"POINTER:\t\t" << *stringPTR << std::endl;
	std::cout<<"REFERENCE:\t\t" << stringREF << std::endl;
}
