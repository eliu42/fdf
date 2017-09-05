double		average_heights(t_map *map)
{
	int 		i;
	int			total_coord;
	double		total_sum;

	total_coord = map->x_dim * map->y_dim;
	i = 0;
	while (i < total_coord)
	{
		total_sum = total_sum + map->points[i].z;
		i++;
	}
	total_sum = total_sum / total_coord;
	return (total_sum);
}


void	get_map_center(t_map *map)
{
	map->center->x = (map->x_dim + 1) / 2;
	map->center->y = (map->y_dim + 1) / 2;
	map->center->z = average_heights(map);
	
}

