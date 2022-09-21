/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melogr@phy <tgrivel@student.42lausanne.ch  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:05:39 by melogr@phy        #+#    #+#             */
/*   Updated: 2022/09/20 21:35:25 by melogr@phy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>

int	main(void)
{
	std::string	prompt;

	// Prompt
	while (1)
	{
		std::cout << "80s Book $ ";
		std::getline(std::cin, prompt);
		if (prompt == "quit")
			break ;
	}
	return (0);
}
