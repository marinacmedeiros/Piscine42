/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:40:33 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/27 14:59:30 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	m;
	int	n;
	int	comp;

	if (to_find[0] == '\0')
		return (str);
	comp = 0;
	while (to_find[comp])
		comp++;
	m = 0;
	while (str[m])
	{
		n = 0;
		if (str[m] == to_find[n])
		{
			while (str[m + n] == to_find[n])
			{
				n++;
				if (n == comp)
					return (&str[m]);
			}
		}
		m++;
	}
	return (0);
}

/*int main (void)
{
	char	x[] = "Pokemon! Temos que pegar";
	char	y[] = "Temos";

	printf("saída:%s\n", ft_strstr(x, y));
}*/
