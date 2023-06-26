/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:25:04 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/26 18:24:27 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			result = ((char *)s);
			return (result);
		}
		s++;
	}
	if ((*s == '\0') && ((char)c == '\0'))
		return ((char *)s);
	return (0);
}
