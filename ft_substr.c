/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:25:00 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/16 18:16:24 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	size;
	size_t	i;

	size = 0;
	while (*(s + size))
		size++;
	if (start > size)
		start = size;
	if (len > size - start)
		len = size - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while ((*(s + start)) && (i < len))
	{
		*(dest + i) = *(s + start);
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
