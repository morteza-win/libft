/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 18:16:10 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/06 14:38:17 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int main(void)
{
    char    *content1 = "bye";
    char    *content2 = "good";
    t_list  *node1 = ft_lstnew(content1);
    t_list  *node2 = ft_lstnew(content2);
    ft_lstadd_front(&node1, node2);
    t_list *current = node1;
    while(node1)
    {
        printf("%s\n", (char *)node1->content);
        printf("%p\n", node1->next);
        node1 = node1->next;
    }
	printf("%i\n", ft_lstsize(current));
    t_list *tmp;
    while (current)
    {
        tmp = current->next;
        free(current);
        current = tmp;
    }
}*/
