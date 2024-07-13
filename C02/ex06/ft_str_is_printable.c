/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:03:43 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/26 16:09:47 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	w;
	int	x;
	int	y;
	int	z;

	w = ft_str_is_printable("Hello world!");
	x = ft_str_is_printable("\0");
	y = ft_str_is_printable("");
	z = ft_str_is_printable("\n");

	printf("%d\n", w);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
}*/
