/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:00:44 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/02 15:06:14 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_leng;
	size_t	dst_leng;
	size_t	i;

	src_leng = 0;
	dst_leng = 0;
	i = 0;
	while (dst[dst_leng] != '\0')
		dst_leng++;
	while (src[src_leng] != '\0')
		src_leng++;
	if (size <= dst_leng || size == 0)
		return (size + src_leng);
	while (src[i] && (dst_leng + i < size - 1))
	{
		dst[dst_leng + i] = src[i];
		i++;
	}
	dst[dst_leng + i] = '\0';
	return (dst_leng + src_leng);
}
/*
int	main(void)
{
	char	dest[10] = "hello";
	char	*source = "bybye";
	size_t a = ft_strlcat(dest, source, 10);
	printf("%s\n", dest);
	printf("%zu\n", a);
}*/
