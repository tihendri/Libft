/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:57:36 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/27 16:02:04 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
**Allocates (with malloc(3)) and returns an array of “fresh” strings
**(all ending with ’\0’, including the array itself) obtained by spliting s
**using the character c as a delimiter.
**If the allocation fails the function returns NULL.
**The functions applied here are ft_count_letters and ft_wordcount.
**When we decifer the prototype this function,
**we find that we need to return a 2D array.
**We first need to seperate the words themselves by using the function
**ft_wordcount, then allocate memory for those words.
**Then we need to get the number of words in each of those words and allocate
**space for them aswell (using ft_strnew in a loop until all words are done).
**
*/

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		n;
	int		q;
	char	**string;

	if (!(string = (char **)malloc(sizeof(*string) * (ft_wordcount(s, c) + 1)))
			|| !s || !c)
		return (NULL);
	i = -1;
	n = 0;
	while (++i < ft_wordcount(s, c))
	{
		q = 0;
		string[i] = ft_strnew(ft_count_letters(&s[n], c) + 1);
		if (!(string[i]))
			string[i] = NULL;
		while (s[n] == c)
			n++;
		while (s[n] != c && s[n])
			string[i][q++] = s[n++];
		string[i][q] = '\0';
	}
	return (string);
}

static int		freefunct(void **tab)
{
	unsigned int	i;

	if (tab == NULL)
		return (0);
		i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i = i + 1;
	}
	free(tab);
	return (1);
}
int				main(void)
{
	char	**ret;

	ft_strsplit(NULL, 0);
	ft_strsplit(NULL, 'a');
	ret = ft_strsplit("", '*');
	if (ret == NULL || ret[0] != NULL)
	{
		printf("Returns NULL or the first pointer in your tab is NULL\n");
		freefunct((void **)ret);
		return (0);
	}
}
