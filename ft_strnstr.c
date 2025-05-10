/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:14:41 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/03 23:02:05 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		if (little[j] == big[i])
		{
			while (little[j] == big[i + j] && little[j] != '\0' && i + j < len)
				j++;
			if (little[j] == '\0')
				return ((char *) big + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	gros[300] = "i am ironman manc";
	char	klein[20] = "man";
	printf("%s\n", ft_strnstr(gros, klein, 20));
}*/
