/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:42:51 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/27 18:23:34 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	m;

	m = 0;
	while (s1[m] == s2[m] && s1[m] != '\0' && s2[m] != '\0')
		m++;
	return (s1[m] - s2[m]);
}

/*int	main(void)
{
	char	a[] = "aaxaaa";
	char	b[] = "aaaa";

	printf("diferença entre os caracteres:%d\n", ft_strcmp(a, b));
	return (0);
}*/
