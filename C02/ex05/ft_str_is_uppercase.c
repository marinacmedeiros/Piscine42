/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:20:38 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/24 11:36:15 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (!(str[m] >= 'A' && str[m] <= 'Z'))
			return (0);
		m++;
	}
	return (1);
}
