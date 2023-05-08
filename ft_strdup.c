/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:14:29 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/08 12:16:35 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	static_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strdup(const char *str)
{
	char	*dup;
	char	*str_ptr;
	char	*dup_ptr;

	dup = malloc((static_strlen(str) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	str_ptr = (char *)str;
	dup_ptr = dup;
	while (*str_ptr)
	{
		*dup_ptr = *str_ptr;
		str_ptr++;
		dup_ptr++;
	}
	*dup_ptr = '\0';
	return (dup);
}
