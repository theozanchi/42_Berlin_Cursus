/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_sign_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:38:17 by tzanchi           #+#    #+#             */
/*   Updated: 2024/01/12 18:40:12 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks wether two doubles have the same sign
 * 
 * @param a
 * @param b
 * @return 0 or 1 
 */
int	same_sign_double(double a, double b)
{
	if ((a > 0 && b < 0) || (a < 0 && b > 0))
		return (0);
	else
		return (1);
}
