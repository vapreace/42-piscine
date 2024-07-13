/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:28:33 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/23 17:46:27 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	string_to_int(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	if (!str || str[i] == '-')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			return (0);
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 3) 
		rush(string_to_int(argv[1]), string_to_int(argv[2]));
	return (0);
}
