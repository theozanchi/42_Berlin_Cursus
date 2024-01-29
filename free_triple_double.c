/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_triple_double.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:06:25 by helauren          #+#    #+#             */
/*   Updated: 2024/01/29 09:17:26 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_triple_double(double ***points, int x, int y)
{
	int	xx;
	int	yy;

	xx = 0;
	while (xx < x)
	{
		yy = 0;
		while (yy < y)
		{
			free(points[xx][yy]);
			yy++;
		}
		free(points[xx]);
		xx++;
	}
	free(points);
}
