/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 18:22:56 by wballaba          #+#    #+#             */
/*   Updated: 2018/12/14 18:22:58 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int    get_map_size(int tet_count)
{
    int    i;
	
    i = 0;
    if (tet_count < 0)
        return (0);
    while (i * i < tet_count * 4 && i <= 46340)
        i++;
	printf("map_size =  %d\n\n", i);
    return (i);
}

char	*map_creation(int tet_count)
{
    int map_size;
    char *map;

    map_size = get_map_size(tet_count) * get_map_size(tet_count);
    if ((map = ft_strnew(map_size)) == NULL)
        return (0);
    map = ft_memset(map, '.', map_size);
    return (map);
}

// int fillit_map(char *map, char *arr, int map_size, char *mask)
// {
// 	int i;
// 	int	kr;
// 	char ch = 'A';
// 	char *map_ptr;

// 	kr = 0;
// 	map_ptr = map;
// 	while (map)
// 	{
// 		if (map[arr[kr]] != '.')
// 		{
// 			map_ptr = ft_memset(map_ptr, '.', map_size * map_size);
// 			map++;
// 		}
// 		else
// 		{
// 			map[arr[kr]] == ch;
// 			kr++;
// 		}
		
// 	}
// }

