/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:57:17 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/05 11:15:32 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (*ptr1 && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);
}
