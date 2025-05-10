/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:02:38 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/08 14:39:53 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*last;

	str = (char *)s;
	i = 0;
	last = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			last = str + i;
		i++;
	}
	if ((unsigned char)c == '\0')
		last = str + i;
	return (last);
}
/*
int	main(void)
{
	const char	text[20] = "teste";
	printf("%p\n", &text[4]);
	printf("%p\n", &text[5]);
	printf("%p\n", ft_strrchr(text, 1024));
}*/
