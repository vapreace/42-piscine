/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 07:11:54 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/24 19:58:41 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}
/*
#include <stdio.h>

int main(void)
{
	int tab[] = {1, 3, 5, 7, 9, 11, 15};
	
	int size = 7;
	int i = 0;
	
	printf("BEFORE: ");

	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	
	ft_rev_int_tab(tab, size);
	
	i = 0;
	
	printf("\nAFTER: ");
	
	while (i < size)
        {
                printf("%d ", tab[i]);
                i++;
        }
}*/
