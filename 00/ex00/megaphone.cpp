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

using namespace std;

int	main(int ac, char **av)
{
	locale loc;

	// For all arguments:
	//   upper case the letters
	//   print the string
	for (int i = 0; ++i < ac;)
	{
		use_facet< ctype<char> >(loc).toupper ( av[i], av[i] +sizeof(av[i]) );
		cout << av[i];
	}

	// Newline
	cout << endl;

	return (0);
}
