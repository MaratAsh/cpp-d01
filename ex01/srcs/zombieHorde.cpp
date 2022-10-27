/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <alcierra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 00:00:00 by alcierra          #+#    #+#             */
/*   Updated: 2022/01/01 00:00:00 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	std::string Nstr = std::to_string(N);
	if (N < 2) {
		std::cout<<"Come on, it's impossibel to have a horde of " + Nstr + " zombies !"<<std::endl;
		exit(1);
	}
	Zombie* zombs = new Zombie [N];
	if (!zombs){
		std::cout<< "Looks like" + Nstr + " Zombies are too much for our memory. Or smth went wrong !"<<std::endl;
		exit(1);
	}
	for (int i = 0; i < N; i++) {
		zombs[i].get_name(name + "(" + std::to_string(i) + ")");
	}
	return zombs;
};
