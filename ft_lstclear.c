/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 00:08:20 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/24 02:19:53 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*uno;
	t_list	*next;

	if ((lst == NULL) || (*lst == NULL) || (del == NULL))
		return ;
	uno = *lst;
	next = NULL;
	while (uno != NULL)
	{
		next = uno -> next;
		del (uno -> content);
		free (uno);
		uno = next;
	}
	*lst = NULL;
}
