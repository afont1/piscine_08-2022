/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pasdel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:20:18 by afont             #+#    #+#             */
/*   Updated: 2022/08/12 12:08:27 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	affichage(int n1, int n2)
{
	char	n11;
	char	n12;
	char	n21;
	char	n22;

	n11 = n1 / 10 + 48;
	n12 = n1 % 10 + 48;
	n21 = n2 / 10 + 48;
	n22 = n2 % 10 + 48;
	write(1, &n11, 1);
	write(1, &n12, 1);
	write(1, " ", 1);
	write(1, &n21, 1);
	write(1, &n22, 1);
	if (n1 != 98 || n2 != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	int		limite;

	n1 = 00;
	n2 = 01;
	limite = 01;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			affichage(n1, n2);
			n2++;
		}
		limite++;
		n2 = limite;
		n1++;
	}
}
