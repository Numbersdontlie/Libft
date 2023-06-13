/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:14:43 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/13 18:46:54 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*result;

	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while ((*s1) && (ft_strchr(set, (*s1 + start))))
		start++;
	while (*(s1 + (end - 1)) && (ft_strchr(set, (*(s1 + (end - 1))))))
		end--;
	len = end - start + 1;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1 + start, len + 1);
	return (result);
}
