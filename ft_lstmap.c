/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 01:44:38 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/24 01:51:09 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*aux;
	t_list	*new_lst;

	new_lst = NULL;
	while (lst != NULL)
	{
		aux = ft_lstnew(f(lst -> content));
		if (aux == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, aux);
		lst = lst -> next;
	}
	return (new_lst);
}
