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
#include	<string.h>

using namespace std;

int	main(void)
{
	string	prompt;

	// Prompt
	while (1)
	{
		cout << "80s Book $ ";
		getline(cin, prompt);
		if (!strcmp(prompt.c_str(), "quit"))
			break ;
	}

	return (0);
}
