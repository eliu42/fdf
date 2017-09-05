void	translate_map(t_map *map, int horizontal, int vertical)
{
	int i;

	i = 0;
	while (i < map->x_dim * map->y_dim)
	{
		map->points[i].x += horizontal;
		map->points[i].y += vertical;
		i++;
	}
}
