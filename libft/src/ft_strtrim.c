/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:21:43 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/10 12:02:20 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		n;
	int		len;
	char	*string;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	n = -1;
	while (s[++n] == ' ' || s[n] == '\t' || s[n] == '\n')
		len--;
	if (len <= 0)
		len = 0;
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	s += n;
	n = -1;
	while (++n < len)
	{
		string[n] = *s++;
	}
	string[n] = '\0';
	return (string);
}
