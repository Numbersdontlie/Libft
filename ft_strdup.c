/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:02:45 by lperez-h          #+#    #+#             */
/*   Updated: 2023/05/26 15:06:48 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strdup(const char *s)
{
	char	*new;
	size_t	length;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	new = (char *)malloc((length + 1) * sizeof(char));
	if (new != NULL)
		ft_strcpy(new, s);
	return (new);
}
