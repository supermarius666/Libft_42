/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:26:37 by mdumitru          #+#    #+#             */
/*   Updated: 2024/02/23 19:35:26 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	aux(int nr, int fd, char c)
{
	long	n;

	n = nr;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 10)
	{
		c = n % 10 + 48;
		ft_putchar_fd(c, fd);
	}
	else
	{
		c = n % 10 + 48;
		aux(n / 10, fd, 'a');
		ft_putchar_fd(c, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	aux(n, fd, 'w');
}
