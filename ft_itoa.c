/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marius <marius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:35:05 by mdumitru          #+#    #+#             */
/*   Updated: 2024/02/26 19:13:39 by marius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	aux(int nr, char *str, int cifre)
{
	long	n;

	n = nr;
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[--cifre] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		cifre;
	long	nr;

	nr = n;
	cifre = digits(nr);
	str = (char *)malloc(cifre + 1);
	if (!str)
		return (NULL);
	aux(n, str, cifre);
	str[cifre] = '\0';
	return (str);
}
