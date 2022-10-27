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

#include "Zombie.hpp"


int	main() {
	int	N = 1000;

	std::cout<< "*** CREATING ***" <<std::endl;
	Zombie* p;
	p = zombieHorde(N, "poop");
	
	std::cout<< "*** CALLING NAMES ***" <<std::endl;
	for (int i = 0; i < N; i++){
		p[i].announce();
	}
	
	std::cout<< "*** DELETING ***" << std::endl;
	delete[] p;
	std::cout<< "*** SUCCESS EXIT ***" << std::endl;
	
	return 0;
}
