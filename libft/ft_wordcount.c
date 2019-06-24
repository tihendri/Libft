/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 16:38:52 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/24 16:26:21 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Counts how many words are in a string.
**The words will be delimited by c.
*/

int	ft_wordcount(char const *s, char c)
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
