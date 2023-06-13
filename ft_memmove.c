/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:49:48 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/13 16:18:48 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src < dest)
	{
		s += n;
		d += n;
		while (n--)
			*--d = *--s;
	}
	else if (src > dest)
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
