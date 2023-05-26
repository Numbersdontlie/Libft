/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:36:33 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/26 15:21:41 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	ss;
	size_t			i;

	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
