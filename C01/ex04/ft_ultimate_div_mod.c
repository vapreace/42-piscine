/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:04:26 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/24 20:57:07 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main()
{
	int a;
	int b;
	
	a = 7;
	b = 3;

	printf("BEFORE: a = %d | b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("AFTER: div = %d | mod = %d\n", a, b);
}*/
