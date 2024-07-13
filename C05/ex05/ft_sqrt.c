/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <isousa-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:17:28 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/06 05:19:02 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	if (nb == 16)
		return (4);
	if (nb % 10 == 2 || nb % 10 == 3 || nb % 10 == 7 || nb % 10 == 8)
		return (0);
	while (i++ <= nb / 5)
	{
		if ((nb / i == i) && (nb % i == 0))
			return (i);
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nb = atoi(argv[1]);
		int result = ft_sqrt(nb);
		printf("%d", result);
	}
}*/
