/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:01:36 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/24 11:35:15 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (!(str[m] >= 'a' && str[m] <= 'z'))
			return (0);
		m++;
	}
	return (1);
}
