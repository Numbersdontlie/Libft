/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:02:45 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/13 16:31:47 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	char	*result;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	new = (char *)malloc(i + 1);
	if (new == NULL)
		return (NULL);
	result = new;
	while (*s)
	{
		*new = *s;
		new++;
		s++;
	}
	*new = '\0';
	return (result);
}
