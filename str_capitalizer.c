/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:43:28 by boel-bou          #+#    #+#             */
/*   Updated: 2024/02/25 11:07:30 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac >= 2)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				while(av[i][j] && (av[i][j] == ' ' || av[i][j] == '\t'))
					j++;
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					av[i][j] -= 32;
					j++;
				}
				else if (av[i][j] >= 'A' && av[i][j] <= 'Z')
					j++;
				else if (av[i][i])
					j++;
				while (av[i][j] && (av[i][j] != ' ' && av[i][j] != '\t'))
				{
					if (av[i][j] >= 'A' && av[i][j] <= 'Z')
						av[i][j] += 32;
					j++;
				}
				j++;
			}
			j = 0;
			while (av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
