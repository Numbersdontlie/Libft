/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 00:29:24 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/24 01:35:19 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp (const void *s1, const void *s2, size_t n)
{
    unsigned char *ss1;
    unsigned char *ss2;
    size_t i;

    i = 0; 
    ss1 = (unsigned char)s1;
    ss2 = (unsigned char)s2;
    while (i < n)
    {
        if (ss1[i] != ss2[i])
            return (ss1[i] - ss2[i]);
        i++;
    }
    return (0);
}