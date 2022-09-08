/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:31:32 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/24 11:37:15 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{	
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (!(str[m] >= 32 && str[m] <= 126))
			return (0);
		m++;
	}
	return (1);
}
