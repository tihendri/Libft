/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:06:11 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/10 12:57:37 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cpystr1;
	unsigned char	*cpystr2;

	cpystr1 = (unsigned char *)s1;
	cpystr2 = (unsigned char *)s2;
	while ((*cpystr1 != '\0' || *cpystr2 != '\0') && (n--))
	{
		if (*cpystr1 != *cpystr2)
		{
			return (*cpystr1 - *cpystr2);
		}
		cpystr1++;
		cpystr2++;
	}
	return (0);
}
