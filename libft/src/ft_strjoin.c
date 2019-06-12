/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:02:33 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/12 15:32:18 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concatenation;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	concatenation = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (concatenation == NULL)
		return (NULL);
	ft_strcpy(concatenation, s1);
	return (ft_strcat(concatenation, s2));
}
