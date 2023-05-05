/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:42:41 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/05 19:29:42 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	static_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_length;
	size_t	dest_length;

	src_length = static_strlen(src);
	dest_length = static_strlen(dest);
	if (size < dest_length)
		return (size + src_length);
	dest += dest_length;
	size -= dest_length;
	while (*src && --size)
		*(dest++) = *(src++);
	*dest = '\0';
	return (src_length + dest_length);
}
