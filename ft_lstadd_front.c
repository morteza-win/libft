/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:47:05 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/05 12:17:05 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	char	*content1 = "bye";
	char	*content2 = "good";
	t_list	*node1 = ft_lstnew(content1);
	t_list	*node2 = ft_lstnew(content2);
	ft_lstadd_front(&node1, node2);
	t_list *current = node1;
	while(node1)
	{
		printf("%s\n", (char *)node1->content);
		printf("%p\n", node1->next);
		node1 = node1->next;
	}
	t_list *tmp;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}*/
