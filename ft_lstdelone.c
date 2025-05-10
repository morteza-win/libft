/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:23:26 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/06 14:32:28 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main(void)
{
	char	*content1 = strdup("bye");
	char	*content2 = strdup("good");
	t_list	*node1 = ft_lstnew(content1);
	t_list	*node2 = ft_lstnew(content2);
	ft_lstadd_back(&node2, node1);
	t_list	*current = node2;
	while(current)
	{
		printf("%s\n", (char *)current->content);
		printf("%p\n", current->next);
		current = current->next;
	}
	node2->next = NULL;
	current = node2;
	ft_lstdelone(node1, del);
	while(current)
    {
		printf("%s\n", (char *)current->content);
		printf("%p\n", current->next);
		current = current->next;
    }
	ft_lstdelone(node2, del);
}*/
