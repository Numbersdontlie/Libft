/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:10:16 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/26 15:12:27 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (s2[i] != '\0')
		i++;
	if (i == 0)
		return ((char *)s1);
	while (*s1 && len >= i)
	{
		if (strncmp(s1, s2, i) == 0)
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
