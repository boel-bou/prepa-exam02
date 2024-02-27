/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:00:52 by boel-bou          #+#    #+#             */
/*   Updated: 2024/02/26 15:48:14 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n% 10 )+ '0');
}
int main(int ac, char **av)
{
	int cmp;
	char c ;

	cmp = 0;
	if (ac == 1)
	{
		write(1, "0\n", 2);
		return 0;
	}
	cmp = ac - 1;
	ft_putnbr(cmp);
	write(1, "\n", 1);
}
