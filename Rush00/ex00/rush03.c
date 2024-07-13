/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:29:29 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/23 13:09:07 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char first, char mid, char last)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar(first);
		else if (col == x)
			ft_putchar(last);
		else
			ft_putchar(mid);
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (row <= y)
	{
		if (row == 1)
			print_line(x, 'A', 'B', 'C');
		else if (row == y)
			print_line(x, 'A', 'B', 'C');
		else
			print_line(x, 'B', ' ', 'B');
		row++;
	}
}
