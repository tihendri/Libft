/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:57:36 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/13 09:11:54 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_word(char *s, char c)
{
	size_t		n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		while (*s != c && *s)
			s++;
		n++;
	}
	return (n);
}

static void		ft_copy(char *dest, char *start, char *end)
{
	char		*d;

	d = dest;
	while (start <= end)
	{
		*d = *start;
		d++;
		start++;
	}
	*d = '\0';
}

static int		make_elm(char **arr, int arr_i, char *start, int len)
{
	arr[arr_i] = (char*)malloc(len + 1);
	if (arr[arr_i] == NULL)
		return (0);
	ft_copy(arr[arr_i], start, start + len - 1);
	arr_i++;
	return (arr_i);
}

static char		**make_array(char **arr, char const *s, char c)
{
	char		*cpy;
	char		*start;
	int			arr_i;
	int			len;

	cpy = (char *)s;
	arr_i = 0;
	while (*cpy)
	{
		len = 0;
		while (*cpy == c)
			cpy++;
		start = cpy;
		while (*cpy != c && *cpy)
		{
			len++;
			cpy++;
		}
		if (len)
			arr_i = make_elm(arr, arr_i, start, len);
	}
	arr[arr_i] = 0;
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**arr;

	if (s)
	{
		arr = (char**)malloc(sizeof(char*) * (ft_count_word((char*)s, c) + 1));
		if (arr == NULL)
			return (NULL);
		arr = make_array(arr, s, c);
	}
	else
		return (NULL);
	return (arr);
}
