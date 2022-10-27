/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <alcierra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 00:00:00 by alcierra          #+#    #+#             */
/*   Updated: 2022/01/01 00:00:00 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug() {
	std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;	
};

void	Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(){
	std::cout<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}

void	Harl::error() {
	std::cout<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string str) {
	std::string mood_str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl:: *fmood[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	m = 0;
	for (int i = 0; i < 4; i++){
		m = (int)!mood_str[i].compare(str);
		switch (m)
		{
		case 1:
			(this->*fmood[i])();
			break;
		
		default:
			break;
		}
	};
}

Harl::Harl(){std::cout<< "Harl borned here !" << std::endl;};
Harl::~Harl(){std::cout<< "Harl died !" << std::endl;};