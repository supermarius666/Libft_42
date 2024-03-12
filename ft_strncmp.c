/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:58:50 by mdumitru          #+#    #+#             */
/*   Updated: 2024/02/23 12:28:51 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	i = 0;
	while (i < n && ((temp1[i] != '\0' || temp2[i] != '\0')))
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}
	return (0);
}
