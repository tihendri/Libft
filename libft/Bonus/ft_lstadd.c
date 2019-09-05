/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 09:51:09 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/28 12:57:10 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
**Adds the element new at the beginning of the list.
**Arrow shows the reference inside the current block of the list.
**next (line 25) points to a pointer to alst,
**then (line 26) the pointer to alst points to a new list,
**thus a new list has been added.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst != NULL)
		new->next = *alst;
	*alst = new;
}

int		main(void)
{
	t_list *ls;
	t_list *lst;
	lst = (t_list *)malloc(sizeof(*lst));
	t_list *temp;
	char s[] = "wolrd";

	lst->content_size = 5;
	printf("8\n");
	//s = (char *)malloc(sizeof(char) * 5);
	//s[0]  = 'w'; s[1] = 'o'; s[2]  = 'r'; s[3] = 'l'; s[4] = 'd';
	lst->content = s;
	printf("9\n");
	lst->content_size = 5;
	printf("7\n");
	const char str[] = "Hello";
	size_t i = 9;

	printf("1\n");
	ls = ft_lstnew(str, i);
	printf("%s\n", ls->content);
	printf("%zu\n", ls->content_size);
	printf("2\n");
	ft_lstadd(&ls, lst);
	printf("3\n");
	temp = ls;
	printf("4\n");
	while (temp != NULL)
	{
		printf("%s\n", temp->content);
		printf("%zu\n", temp->content_size);
		temp = temp->next;
	}
	return (0);
}

	
