/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:13:13 by mdumitru          #+#    #+#             */
/*   Updated: 2024/02/16 22:13:13 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;

	if (!dest && !src)
		return (NULL);
	tmp = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	if (tmp2 < tmp)
	{
		while (n--)
			tmp[n] = tmp2[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
