/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strndup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 16:34:35 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/05 15:11:37 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char *string;

	string = (char *)malloc(sizeof(char) * n + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	string = ft_strncpy(string, s, n);
	string[n] = '\0';
	return (string);
}
