/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:01:48 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/29 15:26:14 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	int		i;
	size_t	k;

	i = start;
	k = 0;
	if (!s || !(fresh = (char *)malloc(len * sizeof(char) + 1)))
		return (NULL);
	else
	{
		while (k < len)
		{
			fresh[k] = s[i];
			i++;
			k++;
			if (s[i] == '\0')
			{
				fresh[k] = '\0';
				return (fresh);
			}
		}
		fresh[k] = '\0';
	}
	return (fresh);
}
