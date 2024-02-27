/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:10:07 by boel-bou          #+#    #+#             */
/*   Updated: 2024/02/25 12:23:09 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;


void flood_fillo(char **tab, t_point size, t_point begin, char target)
{
    if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y)
        return;

    if (tab[begin.y][begin.x] != target || tab[begin.y][begin.x] == 'F')
        return;

    if (tab[begin.y][begin.x] == target)
        tab[begin.y][begin.x] = 'F';

    t_point begin1 = {begin.x, begin.y + 1};
    t_point begin2 = {begin.x, begin.y - 1};
    t_point begin3 = {begin.x + 1, begin.y};
    t_point begin4 = {begin.x - 1, begin.y};

    flood_fillo(tab, size, begin1, target);
    flood_fillo(tab, size, begin2, target);
    flood_fillo(tab, size, begin3, target);
    flood_fillo(tab, size, begin4, target);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char target;
	target = tab[begin.y][begin.x];
	flood_fillo(tab, size, begin, target);
}
// #include <stdlib.h>
// #include <stdio.h>

// char** make_area(char** zone, t_point size)
// {
// 	char** new;

// 	new = malloc(sizeof(char*) * size.y);
// 	for (int i = 0; i < size.y; ++i)
// 	{
// 		new[i] = malloc(size.x + 1);
// 		for (int j = 0; j < size.x; ++j)
// 			new[i][j] = zone[i][j];
// 		new[i][size.x] = '\0';
// 	}

// 	return new;
// }

// int main(void)
// {
// 	t_point size = {8, 5};
// 	char *zone[] = {
// 		"11111111",
// 		"10001001",
// 		"10010001",
// 		"10110001",
// 		"11100001",
// 	};

// 	char**  area = make_area(zone, size);
// 	for (int i = 0; i < size.y; ++i)
// 		printf("%s\n", area[i]);
// 	printf("\n");

// 	t_point begin = {7, 4};
// 	flood_fill(area, size, begin);
// 	for (int i = 0; i < size.y; ++i)
// 		printf("%s\n", area[i]);
// 	return (0);
// }
