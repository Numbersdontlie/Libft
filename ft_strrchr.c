/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:43:30 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/12 13:39:06 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (unsigned char) c)
			last = (char *)s;
		s++;
	}
	if ((*s == '\0') && ((char)c == '\0'))
		return ((char *)s);
	return (last);
}
