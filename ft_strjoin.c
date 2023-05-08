/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:55:35 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/08 17:12:11 by tzanchi          ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	char	*output_ptr;

	output = malloc((static_strlen(s1) + static_strlen(s2) + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	output_ptr = output;
	while (*s1)
		*output_ptr++ = *s1++;
	while (*s2)
		*output_ptr++ = *s2++;
	*output_ptr = '\0';
	return (output);
}
