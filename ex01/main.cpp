/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:20:24 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/22 14:24:51 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "iter.hpp"

int main()
{
	int			intArr[] = {4, 2, 2, 1};
	std::string strArr[] = {"Falait", "gerer", "les", "PIPES", "dans", "minishell", "?!!"};

	iter(intArr, 4, print);
	std::cout << std::endl;
	iter(strArr, 7, print);
	std::cout << std::endl;
}
