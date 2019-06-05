/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:59 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 14:57:58 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newstring;
	int		n;
	int		length;

	newstring = NULL;
	length = 0;
	while (s1[length])
	{
		length++;
	}
	s1 = (char*)malloc(sizeof(*newstring) * (length + 1));
	n = 0;
	while (n < length)
	{
		newstring[n] = s1[n];
		n++;
	}
	return (newstring);
}
