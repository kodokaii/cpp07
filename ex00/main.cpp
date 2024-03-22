/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:28 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/22 14:11:45 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void )
{
	int			a(42);
	int			b(7);
	std::string	f("Forty-two");
	std::string t("Seven");

	std::cout << "a = " << a << ", t = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << ", t = " << b << std::endl;
	std::cout << std::endl;
	std::cout << "min(" << a << ", " << b << ") = " << min(a, b) << std::endl;
	std::cout << "max(" << a << ", " << b << ") = " << max(a, b) << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << "f = " << f << ", t = " << t << std::endl;
	swap(f, t);
	std::cout << "f = " << f << ", t = " << t << std::endl;
	std::cout << std::endl;
	std::cout << "min(" << f << ", " << t << ") = " << min(f, t) << std::endl;
	std::cout << "max(" << f << ", " << t << ") = " << max(f, t) << std::endl;
	
	return 0;
}
