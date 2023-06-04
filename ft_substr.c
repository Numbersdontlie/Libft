/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:25:00 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/03 00:22:23 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			size;
	char			*dest;
	unsigned int	i;

	i = start;
	size = len - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	while ((i < len) && (*(s + i) != '\0'))
	{
		*dest = *(s + i);
		s++;
		i++;
	}
	dest[i] = '\0';
	return (dest - len);
	free (dest);
}
