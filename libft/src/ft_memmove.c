/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:41:21 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 16:21:58 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*destination;
	size_t			t;

	t = -1;
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if (source > destination)
	{
		while ((int)(len--) >= 0)
		{
			*(destination + len) = *(source + len);
		}
	}
	else
		while (t++ < len)
		{
			*(destination + t) = *(source + t);
		}
	return (dst);
}
