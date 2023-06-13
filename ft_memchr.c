/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:36:33 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/13 14:41:12 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	size_t			i;

	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ss == (unsigned char) c)
			return ((void *)ss);
		i++;
		ss++;
	}
	return (NULL);
}
