/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:59:51 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/22 11:06:38 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii (int c)
{
    if (c >= '0' && c <= '127')
        return (1);
    else
        return (0);
}