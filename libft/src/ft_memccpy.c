/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:55:15 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 16:16:42 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	while (i < n)
	{
		((char *)d)[i] = ((char *)s)[i];
		i++;
		if (((unsigned char *)d)[i - 1] == cc)
			return (&((unsigned char *)d)[i]);
	}
	return (NULL);
}
