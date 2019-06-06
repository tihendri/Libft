/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:52:49 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/06 15:54:55 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	a;
	unsigned char	b;
	unsigned char	*cpystr1;
	unsigned char	*cpystr2;

	cpystr1 = (unsigned char *)s1;
	cpystr2 = (unsigned char *)s2;
	while (*cpystr1 || *cpystr2)
	{
		a = *cpystr1;
		b = *cpystr2;
		if (a != b)
		{
			return (a - b);
		}
		cpystr1++;
		cpystr2++;
	}
	return (0);
}
