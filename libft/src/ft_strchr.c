/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:55:17 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 14:39:36 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		n;

	n = 0;
	if (c == 0)
	{
		while (s[n])
		{
			n++;
		}
		return ((char *)s + n);
	}
	while (s[n])
	{
		if (s[n] == c)
		{
			return ((char *)s + n);
		}
		n++;
	}
	return (NULL);
}
