/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:57:55 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 16:32:40 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t		count;
	size_t		length;

	count = 0;
	length = 0;
	while (s1[length])
	{
		length++;
	}
	while (s2[count] != '\0')
	{
		s1[count + length] = s2[count];
		count++;
	}
	s1[length + count] = '\0';
	return (s1);
}
