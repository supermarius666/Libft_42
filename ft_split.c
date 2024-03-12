/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:39:29 by mdumitru          #+#    #+#             */
/*   Updated: 2024/03/12 15:05:57 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	words;
	int	fl;

	words = 0;
	fl = 0;
	while (*str)
	{
		if (*str != c && fl == 0)
		{
			fl = 1;
			words++;
		}
		else if (*str == c)
			fl = 0;
		str++;
	}
	return (words);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**split_alloc(int size)
{
	char	**split;

	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	split = split_alloc(count_words(s, c));
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
