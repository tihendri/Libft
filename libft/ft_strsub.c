/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:43:20 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/06 14:20:08 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	n;
	char			*string;

	n = 0;
	string = (char *)malloc(sizeof(char) * len + 1);
	if (s)
	{
		if (string == NULL)
			return (NULL);
		while (n < len)
		{
			string[n] = s[start + n];
			n++;
		}
	}
	string[n] = '\0';
	return (string);
}
