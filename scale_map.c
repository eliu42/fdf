void	scale_point(t_coor *coor, t_coor *center, double scale_factor)
{
	coor->x = center->x + (coor->x - center->x) * scale_factor;
	coor->y = center->y + (coor->y - center->y) * scale_factor;
	coor->z = center->z + (coor->z - center->z) * scale_factor;
}

void	scale_map(t_map *map, double scale_factor)
{
	int		i;

	i = 0;
	while (i < map->x_dim * map->y_dim)
	{
		scale_point(&(map->points[i]), &(map->center), scale_factor);
		i++;
	}
}
