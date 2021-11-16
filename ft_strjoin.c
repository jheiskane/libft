/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:34:19 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/16 18:34:39 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	x;
	size_t	i;

	i = ft_strlen(s1);
	x = ft_strlen(s2);
	new = ft_strnew(i + x);
	if (!new)
		return (NULL);
	new = ft_strcat((char *)s1, s2);
	return (new);
}
