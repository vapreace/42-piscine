/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 23:34:56 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/28 01:32:43 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "Lima";
	char dst[] = "Heitor";

	printf("ft_strlcpy: %d\n", ft_strlcpy(dst, src, 0));
	//printf("strlcpy: %lu\n", strlcpy(dst, src, 0));
	printf("final text: %s\n", dst);
}



