/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:11:12 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/05 12:51:03 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
/*
int main(void)
{
	char	*content1 = "bye";
	char	*content2 = "good";
	t_list  *node1 = ft_lstnew(content1);
	t_list  *node2 = ft_lstnew(content2);
	ft_lstadd_back(&node2, node1);
	t_list *current = node2;
	while(node2)
	{
		printf("%s\n", (char *)node2->content);
		printf("%p\n", node2->next);
		node2 = node2->next;
	}
	t_list *tmp;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}*/
