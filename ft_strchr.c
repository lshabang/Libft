/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:52:35 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/28 09:48:19 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*p;
	unsigned long	i;
	char			cc;

	i = 0;
	p = (char *)s;
	cc = (char)c;
	while (i <= ft_strlen(p))
	{
		if (s[i] == cc)
		{
			return (p + i);
		}
		i++;
	}
	return (NULL);
}
