/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:55:03 by mjacobs           #+#    #+#             */
/*   Updated: 2018/06/14 10:43:11 by mjacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*fresh;

	if (!(s) || !(len))
		return (NULL);
	if (!(fresh = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i != len && s[start])
		fresh[i++] = s[start++];
	fresh[i] = '\0';
	return (fresh);
}
