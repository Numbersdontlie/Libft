/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:14:43 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/20 23:47:52 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while ((*s1) && (ft_strchr(set, (*s1 + start))))
		start++;
	end = ft_strlen(s1);
	while (*(s1 + (end - 1)) && (ft_strchr(set, (*(s1 + (end - 1))))))
		end--;
	if (start > end)
		return (ft_strdup(""));
	result = (char *)malloc((sizeof(char)) * (end - start + 1));
	if (!(result))
		return (NULL);
	ft_strlcpy(result, s1 + start, (end - start + 1));
	return (result);
}
