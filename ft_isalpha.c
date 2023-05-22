/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:50:04 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/16 17:02:55 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char *str)
{
    int i;

    i = 0;
    if(*str == '\0')
    {
        return(1);
    }
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return (0);
    }
    return (1);
}