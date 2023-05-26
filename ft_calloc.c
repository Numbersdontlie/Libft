/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 01:29:15 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/26 15:17:20 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nmemb, size_t size)
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
