/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:43:30 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/08 17:23:57 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	int			i;

	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = s[i];
		i++;
	}
	return (char *last);
}
