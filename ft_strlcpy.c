/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:22:54 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/22 15:56:29 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t ls;
    size_t space;

    i = 0;
    ls = 0;
    space = 0; 
    while (src[ls] != '\0')
        ls++;
    if (size > 0)
        space = size - 1;
    else 
        space = 0;
    while ((i < ls) && (i < space))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ls);
}