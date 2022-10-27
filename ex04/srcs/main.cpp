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
#include <fstream>


void	str_replace(std::ofstream &Ofile, const char *base, std::string sub, char *replace) {
	
	size_t	index = 0;
	size_t	sub_length = strlen(replace);
	size_t	last = 0;
	std::string mybase(base);

	while (true) {
		index = mybase.find(sub, index);
		if (index == std::string::npos){
			Ofile.write(&base[last], mybase.length() - last);
		break;	
		}
		Ofile.write(&base[last], index - last);
		Ofile.write(replace, sub_length);
		last = index + sub.length();
		index += sub_length;
	}
}

int	main(int argc, char **argv) {
	
	if (argc != 4) {
		std::cout<< "Arguments can't be more or less than 3 !" << std::endl;
		exit(1);
	}
	
	std::ifstream	Ifile (argv[1]);
	std::string		tmp;
	std::string		str;
	std::string		ofilename(argv[1]);
	int				isfline = 1;

	if (!Ifile.is_open()) {
		std::cout<< "Failed to open " << argv[1] << std::endl;
		exit(1);
	}
	
	while (std::getline (Ifile, tmp))  {
		if (isfline) {
			str.append(tmp);
			isfline = !isfline;
		}
		else
			str.append("\n").append(tmp);		
	}
	
	std::ofstream	Ofile(ofilename + ".replace");
	if (Ofile.is_open())
		str_replace(Ofile, (str.c_str()), argv[2], argv[3]);
	else {
		std::cout<< "Failed to write into output file !" << std::endl;
		exit(1);
	}

	return 0;
}
