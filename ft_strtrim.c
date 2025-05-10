/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:33:30 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/09 15:14:19 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*copy(const char *s1, char *cpy, int i, int j)
{
	int	k;

	k = 0;
	while (i <= j)
	{
		cpy[k] = s1[i];
		i++;
		k++;
	}
	cpy[k] = '\0';
	return (cpy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*cpy;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (check(s1[i], set))
		i++;
	while (check(s1[j], set))
		j--;
	if (i > j)
	{
		cpy = malloc(1);
		if (cpy == NULL)
			return (NULL);
		cpy[0] = '\0';
		return (cpy);
	}
	cpy = malloc((j - i + 1) + 1);
	if (cpy == NULL)
		return (NULL);
	return (copy(s1, cpy, i, j));
}
/*
#include <stdio.h>
int	main(void)
{
	char	string[50] = "xxyyxitworksxxxyx";
	char	sep[50] = "xy";
	char	*new = ft_strtrim(string, sep);
	printf("%s\n", new);
	free(new);
}*/
