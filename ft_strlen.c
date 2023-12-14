/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helauren <helauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:33:50 by tzanchi           #+#    #+#             */
/*   Updated: 2023/12/14 16:14:29 by helauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_strlen returns the length of the string pointed by 'str'*/
size_t	ft_strlen(const char *str)
{
	size_t	length;

	if(str == NULL)
		return (0);
	length = 0;
	while (*str++)
		length++;
	return (length);
}
