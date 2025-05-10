/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:05:00 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/05 12:31:00 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
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
	t_list	*last = ft_lstlast(current);
	printf("%s\n", (char *)last->content);
	t_list *tmp;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}*/
