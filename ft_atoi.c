/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:40:01 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/05 16:25:53 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	static_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	static_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	char	*ptr;
	int		sign;
	int		result;

	ptr = (char *)nptr;
	sign = 1;
	result = 0;
	while (static_isspace(*ptr))
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while (static_isdigit(*ptr))
	{
		result = result * 10 + *ptr - '0';
		ptr++;
	}
	return (result * sign);
}
