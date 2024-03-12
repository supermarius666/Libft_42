/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marius <marius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:41:26 by mdumitru          #+#    #+#             */
/*   Updated: 2024/03/11 18:45:08 by marius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)(s + len));
		}
		if (len == 0)
			break ;
		len--;
	}
	if (s[len] == (char)c)
		return ((char *)s);
	return (0);
}
