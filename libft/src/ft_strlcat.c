/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:57:02 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 14:41:26 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		a;
	size_t		b;
	size_t		c;

	a = 0;
	b = 0;
	c = 0;
	while (dst[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < dstsize)
	{
		dst[a + b] = src[b];
		b++;
	}
	dst[a + b] = '\0';
	while (src[c] != '\0')
	{
		c++;
	}
	return (c + dstsize);
}
