/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_positive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:11:18 by tzanchi           #+#    #+#             */
/*   Updated: 2024/01/22 15:16:52 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the smallest positive value of the variadic list
 * 
 * @param n number of args
 * @param `...` variadic list of args
 * @return double 
 */
double	smallest_positive(size_t n, ...)
{
	va_list	ap;
	size_t	i;
	double	smallest;
	double	m;

	va_start(ap, n);
	i = 0;
	smallest = -1.0;
	while (i++ < n)
	{
		m = va_arg(ap, double);
		if (m > 0.0 && (smallest < 0.0 || m < smallest))
			smallest = m;
	}
	return (smallest);
}