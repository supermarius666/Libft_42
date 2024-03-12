/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:55:14 by mdumitru          #+#    #+#             */
/*   Updated: 2024/02/23 11:42:21 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	temp;

	str = (unsigned char *)s;
	temp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == temp)
			return (str + i);
		i++;
	}
	return (NULL);
}
