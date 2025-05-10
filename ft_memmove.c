/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:02:05 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/08 13:48:05 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cpy(unsigned const char *ptr1, unsigned char *ptr2, size_t n)
{
	if (n == 0)
		return ;
	ptr1 += n - 1;
	ptr2 += n - 1;
	while (n > 0)
	{
		*ptr2 = *ptr1;
		ptr1--;
		ptr2--;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*ptr1;
	unsigned char		*ptr2;
	size_t				i;

	i = 0;
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (dest);
	if (ptr1 < ptr2)
		cpy(ptr1, ptr2, n);
	else
	{
		while (i < n)
		{
			ptr2[i] = ptr1[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	text[20] = "hello hi how are you";
	char	cpy[20];
	ft_memmove(cpy, text, 8);
	printf("%s\n", cpy);
}*/
