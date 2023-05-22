/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:29:10 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/22 10:49:20 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit (int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else 
        return (0);
}