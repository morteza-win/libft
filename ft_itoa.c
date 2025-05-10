/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:40:52 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/02 15:17:33 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long num)
{
	int	i;

	i = 1;
	if (num < 0)
	{
		i++;
		num *= (-1);
	}
	while (num > 9)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static char	*change(char *final, long num, int j)
{
	long	cpy;

	cpy = num;
	final[j] = '\0';
	j--;
	if (num < 0)
		num *= (-1);
	while (j >= 0)
	{
		final[j] = (num % 10) + '0';
		j--;
		num /= 10;
	}
	if (cpy < 0)
		final[0] = '-';
	return (final);
}

char	*ft_itoa(int n)
{
	int		j;
	char	*final;
	long	num;

	num = (long)n;
	j = len(num);
	final = malloc((j + 1) * sizeof(char));
	if (final == NULL)
		return (NULL);
	return (change(final, num, j));
}
/*
int	main(void)
{
	int		i = -987654321;
	char	*j = ft_itoa(i);
	printf("%s\n", j);
	free(j);
}*/
