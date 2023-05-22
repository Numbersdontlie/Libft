/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:53:22 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/22 15:57:49 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t    ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t copy;
    size_t l; 

    i = 0;
    j = 0;
    copy = 0;
    l = 0;
    while (src[i] != '\0')
        i++;
    while (j < size && dest[j] != '\0')
        j++;
    if (size > j)
        copy = size - j - 1;
    else 
        copy = 0;
    while (src[l] != '\0' && l < copy)
    {
        dest[j + l] = src[l];
        l++;
    }
    if (j < size)
        dest[j + l] = '\0';
    return (i + j);
}