/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:12:56 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/24 11:44:24 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

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
