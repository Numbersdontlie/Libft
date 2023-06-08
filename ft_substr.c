/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:25:00 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/08 17:16:47 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
