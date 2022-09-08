/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:55:36 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/27 14:57:49 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				m;
	unsigned int	n;

	m = 0;
	while (dest[m] != '\0')
		m++;
	n = 0;
	while (src[n] != '\0' && n < nb)
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}

/*int main(void)
{
	char	x[30] = "uma frase aleatória";
	char	y[30] = "concatena aí";

	printf("saída:%s\n", ft_strncat(x, y, 6));
}*/
