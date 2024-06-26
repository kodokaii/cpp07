/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:58 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/23 11:46:53 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <stdexcept>

#define OUT_OF_RANGE "Array index out of range "

template <typename T>
class Array
{
	private:
		T				*data;
		unsigned int	len;

	public:
				Array(void);
				Array(unsigned int n);
				Array(Array const &other);
				~Array(void);
		int		size(void) const;
		Array	&operator=(Array const &other);
		T		&operator[](unsigned int index);
		T const	&operator[](unsigned int index) const;
};
