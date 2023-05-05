/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:28:21 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/05 17:12:59 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*static_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*(ptr++) = (unsigned char)c;
	return (s);
}

void	*calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb && size && SIZE_MAX / nmemb < size)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	static_memset(ptr, 0, total_size);
	return (ptr);
}
