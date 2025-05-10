/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:02:24 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/09 15:12:39 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
		else if (str[i] == c)
		{
			while (str[i] == c && str[i])
				i++;
		}
	}
	return (count);
}

static int	len(char const *s, char c)
{
	int	j;

	j = 0;
	while (s[j] && s[j] != c)
		j++;
	return (j);
}

static char	*newstr(char const *s, unsigned int index, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = malloc(len + 1);
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[index];
		i++;
		index++;
	}
	new[i] = '\0';
	return (new);
}

static char	**copy(char const *s, char c, char **arr, int num)
{
	int	i;
	int	j;
	int	leng;

	i = 0;
	j = 0;
	while (s[i] && j < num)
	{
		while (s[i] && s[i] == c)
			i++;
		leng = len(s + i, c);
		if (leng > 0)
			arr[j] = newstr(s, i, leng);
		if (!arr[j])
		{
			while (j >= 0)
				free(arr[j--]);
			free(arr);
			return (NULL);
		}
		i += leng;
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		num;

	if (!s)
		return (NULL);
	num = count(s, c);
	arr = malloc((num + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr = copy(s, c, arr, num);
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	char *s = "      split   this sentence     !  here too     ";
	char c = ' ';

	int		i = 0;
	char	**array = ft_split(s, c);
	i = 0;
	if (!array)
		return 0;
	while (array[i])
	{
		printf("%d %s\n", i, array[i]);
		free(array[i]);
		i++;
	}
	printf("%d %s\n", i, array[i]);
	free(array);
}*/
