/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:45:52 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/23 23:48:37 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy (void *dest, const void *src, size_t n)
{
    char *destino;
    const char *fuente;
    int i;

    destino = (char*)dest;
    fuente = (const char*)src;
    i = 0;
    while (i < n)
    {
        destino[i] = fuente[i];
        i++;
    }
    return (destino);
}