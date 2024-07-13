/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:09:17 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/26 10:26:36 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int w;
	int x;
	int y;
	int z;
	
	w = ft_str_is_alpha("\0");
	x = ft_str_is_alpha(" ");
	y = ft_str_is_alpha("Helloworld");
	z = ft_str_is_alpha("0123456789");
	
	printf("%d\n", w);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
}*/
