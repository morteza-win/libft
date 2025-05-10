/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:39:27 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/06 14:51:33 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;
	void	*new_ele;

	first = NULL;
	while (lst)
	{
		new_ele = f(lst->content);
		new = ft_lstnew(new_ele);
		if (new == NULL)
		{
			del(new_ele);
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
/*
void	*plus(void *content)
{
	int	i;

	i = 0;
	char	*str = (char *)content;
	while(str[i])
	{
		str[i] += 1;
		i++;
	}
	return (content);
}

void	dele(void *content)
{
	free(content);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
    char    *content1 = strdup("bye");
    char    *content2 = strdup("good");
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
	t_list *copy = ft_lstmap(current, plus, dele);
	while(copy)
    {
        printf("%s\n", (char *)copy->content);
        printf("%p\n", copy->next);
        copy = copy->next;
    }
	t_list *tmp;
    while (current)
	{
        tmp = current->next;
        free(current);
        current = tmp;
    }
}*/
