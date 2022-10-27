/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <alcierra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 00:00:00 by alcierra          #+#    #+#             */
/*   Updated: 2022/01/01 00:00:00 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string ne){
	this->name = ne;
};

Zombie::~Zombie() {
	std::cout<< name << ": DELETED" << std::endl;
	// free(this);
};

void Zombie::announce() {
	std::cout << this->name	<< ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::get_name(std::string name) {
	this->name = name;
};
