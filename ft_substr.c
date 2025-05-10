/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:26:28 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/01 21:10:11 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		sub = malloc(1);
		if (sub == NULL)
			return (NULL);
		*sub = '\0';
		return (sub);
	}
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	i = 0;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	while (i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char	text[50] = "hello world good bye";
	char	*subs = ft_substr(text, 10, 5);
	printf("%s\n", subs);
	free(subs);
}*/
