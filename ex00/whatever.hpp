/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:58:45 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/22 14:00:34 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T		&min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T		&max(T &a, T &b)
{
	if (a < b)
		return (b);
	return (a);
}
