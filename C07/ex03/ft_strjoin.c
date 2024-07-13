/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <isousa-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:17:14 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/09 21:48:11 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_count(int size, char **strs)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*texto;
	int		i;
	int		j;
	int		m;

	texto = malloc(ft_count(size, strs) + ((ft_strlen(sep) * (size - 1)) + 1));
	i = -1;
	m = 0;
	if (size == 0)
	{
		texto = malloc(1);
		texto[0] = '\0';
		return (texto);
	}
	while (strs[++i] && i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			texto[m++] = strs[i][j++];
		j = 0;
		while ((i < (size - 1)) && sep[j] != '\0')
			texto[m++] = sep[j++];
	}
	texto[m] = '\0';
	return (texto);
}

#include <stdio.h>

int main(void)
{
	char *texto[6] = {"vamos", "ver", "o", "que", "vai", "acontecer"};
	int size = 6;
	char *sep = "++++";

	char *x = ft_strjoin(size, texto, sep);
	printf("%s", x);
	free(x);
}
