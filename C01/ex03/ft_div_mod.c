/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:38:26 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/23 15:52:19 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 7;
	b = 3;

	ft_div_mod(a, b, &c, &d);

	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, c, d);
}*/
