typedef struct		s_map
{
	t_coor *points;
	int x_dim;
	int y_dim;
	int	z_dim;
	t_coor center;
}					t_map;

typedef struct		s_coor
{
	double x;
	double y;
	double z;
}					t_coor;

typedef struct		s_info
{
	t_map *map;
}					t_info;
