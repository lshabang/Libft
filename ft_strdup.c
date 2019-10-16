/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:05:17 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/28 09:46:05 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*dup;
	unsigned long	i;

	i = 0;
	if (!(dup = (char *)malloc(ft_strlen(s) * sizeof(char) + 1)))
	{
		return (NULL);
	}
	else
	{
		while (i < ft_strlen(s))
		{
			dup[i] = s[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
