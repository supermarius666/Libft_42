/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:17:57 by mdumitru          #+#    #+#             */
/*   Updated: 2024/02/29 14:33:04 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in(char elem, const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == elem)
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_idx_b(const char *str, char const *set, size_t i, size_t j)
{
	while (i < j)
	{
		if (!in(str[i], set))
			return (i);
		i++;
	}
	return (i);
}

static size_t	get_idx_e(const char *str, char const *set, size_t j, size_t i)
{
	while (j > i)
	{
		if (!in(str[j], set))
			return (j);
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	y;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	x = get_idx_b(s1, set, i, j);
	y = get_idx_e(s1, set, j, i);
	if (x > y)
		return (ft_strdup(""));
	str = (char *)malloc((y - x + 1) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + x, y - x + 2);
	return (str);
}
