/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:59:42 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/22 17:40:34 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int atoi(const char *nptr)
{
    int sign;
    int result;
    int i;

    sign = 1;
    result = 0;
    i = 0;
    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
            || nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
            i++;
    while (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign *= -1;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    return (result * sign);
}