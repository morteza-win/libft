/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:31:29 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/02 14:45:58 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	plus(unsigned int i, char *c)
{
	if (i >= 0)
		*c += 1;
}

int	main(void)
{
	char	text[30] = "abcde7 6fghijklmn";
	ft_striteri(text, plus);
	printf("%s\n", text);
}*/
