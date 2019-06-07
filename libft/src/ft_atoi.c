/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:25:54 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/07 16:14:06 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_negative(const char *str)
{
	if (*str == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int i;
	int nbr;
	int sign;
	int negative;
	const char *strn;

	i = 0;
	nbr = 0;
	sign = 1;
	negative = ft_negative(str + i);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == '+')
		if (i < 0)
			return (0);
		if (negative == 1)
			i++;
			if (str[i] == '+')
				k++;
			i += 1;
	while(str[i] >= '0' || str[i] <= '9')
	{
		if (nbr > 2147483647 && negative == 0)
			return (-1);
		else if (nbr >2147483647 && negative == 1)
			return (0);
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
/* Not quite done yet... This is where you left it*/
	if (negative = 1)
		nbr = number * -1;
	return (nbr);
}
