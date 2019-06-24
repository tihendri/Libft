/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 16:38:52 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 15:15:30 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	unsigned int	n;
	int				count;

	n = 0;
	count = 0;
	while (s[n])
	{
		while (s[n] == c)
		{
			n++;
		}
		if (s[n] != '\0')
		{
			count++;
		}
		while (s[n] && (s[n] != c))
		{
			n++;
		}
	}
	return (count);
}
