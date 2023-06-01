/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 01:29:15 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/01 23:09:47 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*memory;
	char	*ptr;
	size_t	i;

	total = (nmemb * size);
	memory = malloc(total);
	if (memory != NULL)
		ptr = (char *)memory;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (memory);
}
