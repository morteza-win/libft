/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:21:10 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/06 16:49:56 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*t;

	i = 0;
	t = (char *)s;
	while (t[i] != '\0')
	{
		if (t[i] == (char)c)
			return (t + i);
		i++;
	}
	if ((char)c == '\0')
		return (t + i);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	str[20] = "jkbrfcuo";
	char	a = 'z';

	printf("%s\n", ft_strchr(str, a));
}*/