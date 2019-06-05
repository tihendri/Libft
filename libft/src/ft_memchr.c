/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:14:11 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 14:29:49 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*e;

	e = s;
	while (n--)
	{
		if (*e++ == (unsigned char)c)
		{
			return ((void *)--e);
		}
	}
	return (NULL);
}
