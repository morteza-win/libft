/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:41:51 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/01 17:12:10 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)ptr + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	text[20] = "kuef aewf klqa";
	char	t = 'z';
	char	*new = ft_memchr(text, t, 30);

	printf("%s\n", new);
}*/
