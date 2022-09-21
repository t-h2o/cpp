/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melogr@phy <tgrivel@student.42lausanne.ch  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:05:39 by melogr@phy        #+#    #+#             */
/*   Updated: 2022/09/20 20:57:57 by melogr@phy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>


int	main(int ac, char **av)
{
	std::locale loc;

	// For all arguments:
	//   upper case the letters
	//   print the string
	for (int i = 0; ++i < ac;)
	{
		std::use_facet<std::ctype<char> >(loc).toupper ( av[i], av[i] +sizeof(av[i]) );
		std::cout << av[i];
	}

	// Newline
	std::cout << std::endl;

	return (0);
}
