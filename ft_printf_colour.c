/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_colour.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:57:21 by tzanchi           #+#    #+#             */
/*   Updated: 2023/08/24 15:22:19 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_printf uses the format string 's' to print the arguments like the standard
printf function. ft_printf only works with specifiers cspduxX% and returns the
number of characters displayed*/
int	ft_printf_colour(char *colour, const char *s, ...)
{
	va_list	ap;
	size_t	printed_count;

	ft_printf("%s", colour);
	va_start(ap, s);
	va_arg(ap, char *);
	printed_count = ft_printf(s, ap);
	va_end(ap);
	ft_printf("\033[0m");
	return (printed_count);
}
