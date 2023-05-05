/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:48:31 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/05 10:52:16 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	static_strlen(const char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strrchr(const char *str, int c)
{
	int		length;
	char	*ptr;

	length = static_strlen(str);
	ptr = (char *)str + length;
	while (length && *ptr != c)
	{
		length--;
		ptr--;
	}
	if (*ptr == c)
		return (ptr);
	else
		return (NULL);
}
