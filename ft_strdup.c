/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:54:48 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/01 20:51:29 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*cpy;

	i = 0;
	while (s[i] != '\0')
		i++;
	cpy = malloc(i + 1);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
int main() 
{
	const char *original = "Hello, World!";
	char *copy = ft_strdup(original);

    if (copy != NULL) 
	{
		printf("%s\n", copy);
		free(copy);
	}
    return 0;
}*/
