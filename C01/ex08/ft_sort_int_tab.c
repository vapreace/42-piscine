/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:59:55 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/24 20:45:20 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {5, 1, 13, 4};
	int	size;
	int	i;
	
	size = 4;
	i = 0;
	
	printf("BEFORE: ");
	
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

	ft_sort_int_tab(tab, size);

	printf("\nAFTER: ");
	
	i = 0;

	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
