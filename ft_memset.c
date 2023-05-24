/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:15:55 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/23 13:43:53 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset (void *s, int c, size_t n)
{
    unsigned char *p = s;
    unsigned char value = (unsigned char)c;
    while (n > 0)
    {
        *p = value;
        *p++;
        n--;
    }
    return s;
}