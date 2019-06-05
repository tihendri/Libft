/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:44:19 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 14:45:50 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	n;
	size_t	count;

	n = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[n] != '\0')
	{
		count = 0;
		while (needle[count] == haystack[n + count])
		{
			if (needle[count + 1] == '\0')
			{
				return ((char *)haystack + n);
			}
			count++;
		}
		n++;
	}
	return (0);
}
