/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <isousa-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:24:56 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/09 22:28:18 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char a[20] = "o gato ";
	char b[] = "o cachorro e";
	//printf("%s\n", ft_strncat(a, b, 10));
	printf("%s\n", strncat(a, b, 10));
}