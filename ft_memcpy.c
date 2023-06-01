/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:45:52 by lperez-h          #+#    #+#             */
/*   Updated: 2023/06/01 23:08:28 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destino;
	char	*fuente;
	size_t	i;

	destino = (char *)dest;
	fuente = (const char *)src;
	i = 0;
	while (i < n)
	{
		destino[i] = fuente[i];
		i++;
	}
	return (destino);
}
