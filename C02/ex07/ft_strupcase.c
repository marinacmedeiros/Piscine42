/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:53:45 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/24 11:43:30 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (str[m] >= 'a' && str[m] <= 'z')
		str[m] = str[m] - 32;
		m++;
	}
	return (str);
}
