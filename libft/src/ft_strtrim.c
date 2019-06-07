/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:21:43 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/07 10:53:33 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;
	char			*string;

	if (s)
	{
		a = 0;
		b = 0;
		string = (char *)malloc(sizeof(char) * (b - a + 2));
		c = ft_strlen(s) - 1;
		while (s[a] == '\n' || s[a] == '\t' || s[a] == '\f' || s[a] == ' ')
			a++;
		if (s[b] == '\0')
			return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
		while (s[b] == '\n' || s[b] == '\t' || s[b] == '\f' || s[b] == ' ')
			b--;
		if (string == NULL)
			return (NULL);
		while (c < b - a + 1)
		{
			string[c] = s[a + c];
			c++;
		}
		string[c] = '\0';
		return (string);
	}
	return (0);
}
