/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoatran <hoatran@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:20:51 by hoatran           #+#    #+#             */
/*   Updated: 2024/09/04 14:06:39 by hoatran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

bool	is_valid_position(int32_t x, int32_t y, t_cub3D *cub3d)
{
	int32_t	row;
	int32_t	col;

	if (
		x < 0 || (uint32_t)x >= cub3d->map->width
		|| y < 0 || (uint32_t)y >= cub3d->map->height
	)
		return (false);
	row = y / MAP_CELL_SIZE;
	col = x / MAP_CELL_SIZE;
	if (cub3d->map->grid[row][col] == MAP_WALL)
		return (false);
	return (true);
}
