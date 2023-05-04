/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:25:58 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/04 15:58:24 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		dest_byte;
	const unsigned char	src_byte;

	dest_byte = (unsigned char *)dest;
	
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	*src = "test";
	char	dest[5] = "TEST";

	ft_memmove(dest, src, 1);
	printf("%s", dest);
}
