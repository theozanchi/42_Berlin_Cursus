/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:05:04 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/05 17:26:57 by tzanchi          ###   ########.fr       */
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

int	static_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*ptr1 - *ptr2);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		little_len;
	char	*big_ptr;

	if (!*little)
		return ((char *)big);
	little_len = static_strlen(little);
	big_ptr = (char *)big;
	while (*big_ptr && len >= (size_t)little_len)
	{
		if (static_strncmp(big_ptr, little, little_len) == 0)
			return (big_ptr);
		big_ptr++;
		len--;
	}
	return (NULL);
}
