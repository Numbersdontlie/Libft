/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:02:27 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/16 19:28:36 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words(char const *s, char c)
{
	size_t	l;

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
			cfound = 1;
		s++;
	}
	return (count);
}

static int	wword(const char *s, char **d, char c)
{
	char	*temp;

	*d = (char *)malloc((sizeof(char) * (words(s, c) + 1)));
	if (*d == NULL)
		return (0);
	temp = *d;
	while ((*s) && (*s != c))
		*temp++ = *s++;
	*temp = '\0';
	return (1);
}

static void	ft_free(char **s1, char **s2)
{
	while (s2 != s1)
		free(*s2);
	free(s1);
}

char	**ft_split(char const *s, char c)
{
	char	**resultado;
	char	**ptr;
	size_t	count;

	count = csplit(s, c);
	resultado = malloc(sizeof(char *) * (count + 1));
	if ((resultado == NULL) || (s == NULL))
		return (NULL);
	ptr = resultado;
	while (*s == c)
		s++;
	while (count--)
	{
		if (wword(s, ptr, c) == 0)
		{
			ft_free(resultado, ptr);
			return (NULL);
		}
		s = s + words(s, c);
		while (*s == c)
			s++;
		ptr++;
	}
	*ptr = NULL;
	return (resultado);
}
