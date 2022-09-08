/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:47:59 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/27 14:56:41 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	m;
	int	n;

	m = 0;
	while (dest[m] != '\0')
		m++;
	n = 0;
	while (src[n] != '\0')
	{
		dest[m + n] = src[n];
		n++;
	}
	dest[m + n] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	x[20] = "concatene";
	char	y[20] = "aqui";

	printf("saída:%s\n", ft_strcat(x, y));
	return (0);
}*/
