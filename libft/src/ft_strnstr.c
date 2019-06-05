/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:04:29 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 14:44:14 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		n;
	size_t		count;

	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	n = 0;
	while (n < len && haystack[n] != '\0')
	{
		if (haystack[n] == needle[0])
		{
			count = 1;
			while (needle[count] != '\0'
					&& haystack[n + count] == needle[count]
					&& (n + count) < len)
			{
				count++;
			}
			if (needle[count] == '\0')
				return ((char *)&haystack[n]);
		}
		n++;
	}
	return (0);
}
