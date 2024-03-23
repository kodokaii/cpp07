/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:58 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/23 11:47:48 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void):	data(NULL),
						len(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n):	data(new T[n]),
									len(n)
{
}

template <typename T>
Array<T>::Array(Array const &other):	data(new T[other.len]),
										len(other.len)
{
	unsigned int	i;

	for (i = 0; i < this->len; i++)
		this->data[i] = other.data[i];
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] this->data;
}

template <typename T>
int			Array<T>::size(void) const
{
	return (this->len);
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &other)
{
	unsigned int	i;

	delete[] data;
	this->data = new T[other.len];
	this->len = other.len;
	for (i = 0; i < this->len; i++)
		this->data[i] = other.data[i];
}

template <typename T>
T			&Array<T>::operator[](unsigned int index)
{
	if (this->len <= index)
		throw (std::out_of_range(OUT_OF_RANGE));
	return (this->data[index]);
}

template <typename T>
T const		&Array<T>::operator[](unsigned int index) const
{
	if (this->len <= index)
		throw (std::out_of_range(OUT_OF_RANGE));
	return (this->data[index]);
}
