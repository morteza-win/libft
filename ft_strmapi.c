/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafary <mjafary@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:54:01 by mjafary           #+#    #+#             */
/*   Updated: 2025/05/02 14:40:49 by mjafary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*final;
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	final = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (final == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
/*
int	main(void)
{
	char	text[50] = "abcdefghijklmnopqrstuvwxy";
	printf("%s\n", ft_strmapi(text, cipher));
}*/
