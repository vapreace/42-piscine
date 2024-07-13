/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:52:11 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/01 12:52:15 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	is_positive;
	int	result;

	i = 0;
	is_positive = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_positive *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	result *= is_positive;
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		printf("\n");
	else
	{
		printf("%d\n", ft_atoi(argv[1]));
		//printf("%d", atoi(argv[1]));
	}
}
