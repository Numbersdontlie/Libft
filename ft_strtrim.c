/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:14:43 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/26 19:04:30 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*new_string(const char *s1, size_t start, size_t end)
{
	char	*str;
	size_t	i;

	if ((end <= 0) || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(end + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (ft_trim(set, s1[start]))
		start++;
	while (ft_trim(set, s1[end]))
		end--;
	return (new_string(s1, start, end - (start -1)));
}
