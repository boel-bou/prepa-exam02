/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:25:16 by boel-bou          #+#    #+#             */
/*   Updated: 2024/02/27 17:39:18 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
			i++;
		i--;
		while (av[1][i] && (av[1][i] == '\t' || av[1][i] == ' ') && i >= 0)
		{
			i--;
		}
		while (av[1][i] && (av[1][i] != '\t' && av[1][i] != ' ') && i >= 0)
                {
                        i--;
                }
		i++;
		while (av[1][i] && (av[1][i] != '\t' && av[1][i] != ' '))
                {
                        write(1, &av[1][i], 1);
			i++;
                }
	}
	write (1, "\n", 1);
}
