/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:09:59 by mdumitru          #+#    #+#             */
/*   Updated: 2024/02/22 18:02:04 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_equals(const char *s1, const char *s2)
{
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sgn;
	int	res;

	i = 0;
	sgn = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn = -1;
		i++;
	}
	if (ft_equals("-2147483648", str))
		return (-2147483648);
	if (ft_equals("2147483647", str))
		return (2147483647);
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sgn);
}
