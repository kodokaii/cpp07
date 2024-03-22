/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:12:40 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/22 14:24:29 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>

template <typename T>
void iter(T *arr, size_t len, void f(T &))
{
	size_t	i;

	for (i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void print(T &n)
{
	std::cout << n << " ";
}
