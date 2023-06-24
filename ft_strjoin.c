/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:49:35 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/24 02:15:46 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	j;
	size_t	i;
	char	*result;

	len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*(s1 + i))
	{
		*(result + i) = ((char) *(s1 + i));
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		*(result + i) = ((char) *(s2 + j));
		j++;
		i++;
	}
	*(result + i) = '\0';
	return (result);
}
