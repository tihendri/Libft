/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:02:33 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 15:10:41 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	int		c;
	char	*string;

	n = 0;
	c = 0;
	string = (char *)malloc(sizeof(char) * (ft_strlen(s2) + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	while (s1[n] != '\0')
	{
		string[n] = s1[n];
		n++;
	}
	while (s2[c] != '\0')
	{
		string[n + c] = s2[c];
		c++;
	}
	string[n + c] = '\0';
	return (string);
}
