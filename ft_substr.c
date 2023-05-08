/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:11:53 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/08 17:33:28 by tzanchi          ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	char	*output_ptr;

	if (start >= static_strlen(s))
	{
		output = malloc(1 * sizeof(char));
		if (output == NULL)
			return (NULL);
		*output = '\0';
		return (output);
	}
	if (len > static_strlen(s) - start)
		len = static_strlen(s) - start;
	output = malloc((len + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	output_ptr = output;
	s += start;
	while (*s && len--)
		*output_ptr++ = *s++;
	*output_ptr = '\0';
	return (output);
}
