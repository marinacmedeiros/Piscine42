/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:51:04 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/25 07:54:05 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (str[m] >= 'A' && str[m] <= 'Z')
			str[m] = str[m] + 32;
		m++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	m;
	int	n;

	ft_strlowcase(str);
	n = 0;
	m = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= 'a' && str[n] <= 'z')
			|| (str[n] >= '0' && str[n] <= '9'))
		{
			if (m == 0 && str[n] >= 'a' && str[n] <= 'z')
			{
				str[n] -= 32;
			}
			m = 1;
		}
		else
			m = 0;
		n++;
	}
	return (str);
}
