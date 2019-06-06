/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:57:36 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/06 14:27:46 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		a;
	int		b;
	int		d;
	char	**table;

	a = 0;
	d = 0;
	table = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c)) + 1);
	if (s)
	{
		if (table == NULL)
			return (NULL);
		while (s[a])
		{
			while (s[a] == d)
				a++;
			b = a;
			while (s[b] && s[b] != c)
				a++;
			if (a > b)
			{
				table[d] = ft_strndup(s + b, a - b);
				d++;
			}
		}
	}
	table[d] = NULL;
	return (table);
}
