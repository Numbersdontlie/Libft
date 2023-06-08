/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:15:55 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/08 19:09:38 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	p;
	unsigned char	value;

	p = s;
	value = (unsigned char)c;
	while (n > 0)
	{
		*p = value;
		*p++;
		n--;
	}
	return (s);
}
