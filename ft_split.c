/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:02:27 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/14 00:03:29 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words(char const *s, char c)
{
	size_t l;

	l = 0; 
	while ((*s) && (*s != c))
	{
		l++;
		s++;
	}
	return (l);
}
static size_t	csplit(char const *s, char c)
{
	size_t	count;
	size_t	cfound;

	count = 0;
	cfound = 1;
	if (s == NULL)
		return (0);
	while (*s)
	{
		if ((*s != c) && (cfound))
		{
			count++;
			cfound = 0;
		}
		if ((*s == c))
			cfound = 1
		s++;
	}
	return (count);
} 

char	**ft_split(char const *s, char c)
{

}