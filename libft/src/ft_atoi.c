/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:25:54 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/10 13:01:51 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negative(const char *str)
{
	if (*str == '-')
		return (1);
	return (0);
}

static int	ft_isspace(const char *str)
{
	int n;
	int a;

	n = 0;
	a = 0;
	while (str[n] == ' ' || str[n] == '\n' || str[n] == '\t' ||
			str[n] == '\v' || str[n] == '\f' || str[n] == '\r' || str[n] == '+')
	{
		if (str[n++] == '+')
			a++;
		if (str[n] == '-')
		{
			a++;
			break ;
		}
	}
	if (a > 1)
		return (-1);
	return (n);
}

int			ft_atoi(const char *str)
{
	int n;
	int nbr;
	int sign;

	n = ft_isspace(str);
	nbr = 0;
	sign = ft_negative(str + n);
	if (n < 0)
		return (0);
	if (sign == 1)
		n++;
	while (str[n] >= '0' && str[n] <= '9')
	{
		if (nbr > 469762049 && sign == 0)
			return (-1);
		else if (nbr > 469762049 && sign == 1)
			return (0);
		nbr = nbr * 10 + str[n] - '0';
		n++;
	}
	if (sign == 1)
		nbr = nbr * -1;
	return (nbr);
}
