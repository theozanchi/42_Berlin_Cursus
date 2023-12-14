/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helauren <helauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:55:35 by tzanchi           #+#    #+#             */
/*   Updated: 2023/12/14 16:13:38 by helauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_strjoin allocates and returns a new string, which is the result of the
concatenation of ’s1’ and ’s2’*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	char	*output_ptr;

	output = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
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
