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

Zombie::Zombie(std::string ne){this->name = ne;};

Zombie::~Zombie() {
	std::cout<< name << " DELETED" << std::endl;
};

void	Zombie::announce() const {
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
