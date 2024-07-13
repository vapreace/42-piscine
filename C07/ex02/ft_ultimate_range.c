/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <isousa-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:03:14 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/09 21:40:51 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int *range = NULL;
		int count;
		
		count = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
		printf("array:");
		int i = 0;
		while (i < count)
		{
			printf("[%d]", range[i]);
			i++;
		}
		printf("\n");
		printf("range: %d\n", count);
		free(range);
	}
}
