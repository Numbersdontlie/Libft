/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:49:48 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/24 00:23:44 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove (void *dest, const void *src, size_t n)
{
    char *d;
    char *s;
    int i;

    d = (char*)dest;
    s = (char*)src;
    i = n;
    if (s < d && s + n > d)
    {
        while (i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    else
    {
        while (i < n)
        {    d[i] = s[i];
            i++;
        }
    }
    return (dest);
}