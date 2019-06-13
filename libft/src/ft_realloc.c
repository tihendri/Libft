/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:45:46 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/13 11:48:13 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *p, size_t n)
{
	char *new;

	new = (char *)malloc(n);
	ft_bzero(new, n);
	ft_memcpy(new, p, ft_strlen(p) + 1);
	fre(p);
	return (new);
}
