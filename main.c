
#include "mlx.h"

int	main(void)
{
  void *mlx;
  mlx = mlx_init();
  mlx_new_window(mlx, 500, 500, "");
}
