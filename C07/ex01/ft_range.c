/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <isousa-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:09:36 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/07 14:59:00 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
		return (NULL);
	ptr = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int *numbers = ft_range(atoi(argv[1]), atoi(argv[2]));
		int	i;
		
		printf("Array:");
		i = 0;
		while (i < atoi(argv[2]) - atoi(argv[1]))
		{
			printf("[%d]", numbers[i]);
			i++;
		}
	}
}
