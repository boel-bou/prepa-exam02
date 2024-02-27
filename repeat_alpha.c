/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:18:13 by boel-bou          #+#    #+#             */
/*   Updated: 2024/02/26 17:33:31 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = av[1][i] - 'a';
				while (j >= 0)
				{
					write(1, &av[1][i], 1);
					j--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                        {
                                j = av[1][i] - 'A';
                                while (j >= 0)
                                {
                                        write(1, &av[1][i], 1);
					j--;
                                }
                        }
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}