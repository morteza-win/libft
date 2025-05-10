/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:00:16 by mjafary           #+#    #+#             */
/*   Updated: 2025/04/30 20:42:16 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char )c;
		i++;
	}
	return (s);
}
/*
#include <string.h>

int	main(void)
{
	char	str1[20] = "abcdefgh ijklmn";
	char	str2[20] = "abcdefgh ijklmn";

	printf("%s\n", str1);
	printf("%s\n", str2);

	memset(str1 + 1, '$', 5);
	printf("%s\n", str1);
	ft_memset(str2 + 1, '&', 5);
	printf("%s\n", str2);
}*/
