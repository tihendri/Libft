/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:57:36 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/10 12:56:05 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *str, char c)
{
	int n;
	int words;

	n = 0;
	words = 0;
	if (!str)
		return (0);
	while (str[n])
	{
		while (str[n] == c && str[n])
			n++;
		if (str[n] != c && str[n])
			words++;
		while (str[n] != c && str[n])
			n++;
	}
	return (words);
}

static int		ft_next_word(char const *str, char c, int i)
{
	if (i == 0 && str[i] != c && str[i])
		return (i);
	while (str[i] != c && str[i])
		i++;
	while (str[i] == c && str[i])
		i++;
	return (i);
}

static int		ft_wlength(char const *str, char c, int i)
{
	int length;

	length = 0;
	while (str[i + length] != c && str[i + length])
		length++;
	return (length);
}

char			**ft_strsplit(char const *str, char c)
{
	char		**tab;
	int			words;
	int			index;
	int			a;
	int			j;

	words = ft_count_words(str, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	a = 0;
	index = 0;
	while (a < words && str)
	{
		index = ft_next_word(str, c, index);
		j = 0;
		if (!(tab[a] = (char*)malloc(sizeof(char) * ft_wlength(str, c, index))))
			return (NULL);
		while (str[index] != c)
			tab[a][j++] = str[index++];
		tab[a][j] = '\0';
		a++;
	}
	tab[a] = 0;
	return (tab);
}
