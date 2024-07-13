/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <isousa-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:06:07 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/08 21:15:42 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[++i] != '\0')
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	ptr = (char *) malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("Texto: %s", ft_strdup(argv[1]));
}