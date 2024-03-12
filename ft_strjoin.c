/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:50:00 by mdumitru          #+#    #+#             */
/*   Updated: 2024/02/23 16:01:23 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		strjoin = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!strjoin)
			return (NULL);
		i = 0;
		while (i < ft_strlen(s1))
		{
			strjoin[i] = s1[i];
			i++;
		}
		j = 0;
		while (j < ft_strlen(s2))
		{
			strjoin[i + j] = s2[j];
			j++;
		}
		strjoin[i + j] = '\0';
		return (strjoin);
	}
	return (NULL);
}
