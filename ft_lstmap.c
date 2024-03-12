/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marius <marius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:41:08 by mdumitru          #+#    #+#             */
/*   Updated: 2024/03/11 20:04:02 by marius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_map;
	t_list	*temp_elem;

	if (!lst || !f)
		return (NULL);
	lst_map = NULL;
	while (lst)
	{
		temp_elem = ft_lstnew((*f)(lst->content));
		if (!temp_elem)
		{
			ft_lstclear(&lst_map, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_map, temp_elem);
		lst = lst->next;
	}
	return (lst_map);
}
