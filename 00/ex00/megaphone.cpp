/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:57:04 by psaeyang          #+#    #+#             */
/*   Updated: 2026/05/02 18:51:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < ac; i++) {
			std::string text = av[i];
			int len = text.length();
			for (int j = 0; j < len; j++) {
				char res = std::toupper(text[j]);
				std::cout << res;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
