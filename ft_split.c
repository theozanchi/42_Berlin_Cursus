/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:13:25 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/09 15:58:35 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_count(const char *s, char c)
{
	size_t	count;
	bool	previous_is_c;

	count = 0;
	previous_is_c = 1;
	while (*s)
	{
		if (*s != c && previous_is_c)
		{
			count++;
			previous_is_c = 0;
		}
		if (*s == c)
			previous_is_c = 1;
		s++;
	}
	return (count);
}

static size_t	word_length(const char *s, char c)
{
	size_t	length;

	length = 0;
	while (*s++ != c)
		length++;
	return (length);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	char	**ptr;
	char	*temp_ptr;
	size_t	count;

	count = words_count(s, c);
	output = malloc((count + 1) * sizeof(char *));
	if (output == NULL)
		return (NULL);
	ptr = output;
	while (*s == c)
		s++;
	while (count--)
	{
		*ptr = malloc((word_length(s, c) + 1) * sizeof(char));
		if (*ptr == NULL)
		{
			while (ptr-- != output)
				free(*ptr);
			free(output);
			return (NULL);
		}
		temp_ptr = *ptr;
		while (*s != c)
			*temp_ptr++ = *s++;
		*temp_ptr = '\0';
		ptr++;
		while (*s == c)
			s++;
	}
	*ptr = NULL;
	return (output);
}
