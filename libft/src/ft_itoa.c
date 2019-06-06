/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:38:04 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/06 14:38:00 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *string;

	if (!(string = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n == -2147483648)
	{
		return (ft_strcpy(string, "-2147483648"));
	}
	if (n < 0)
	{
		string[0] = '-';
		string[1] = '\0';
		string = ft_strjoin(string, ft_itoa(-n));
	}
	else if (n >= 10)
	{
		string = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	}
	else if (n < 10 && n >= 0)
	{
		string[0] = n + '0';
		string[1] = '\0';
	}
	return (string);
}
