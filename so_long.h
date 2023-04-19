#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <mlx.h>
# include "GNL/get_next_line.h"

typedef struct t_start
{
	int		fd;
	int		mapheight;
	int		mapwidth;
	int		playercount;
	int		columncount;
	int		exitcount;
	int		x_axis;
	int		y_axis;
	int		counter;
	int		collectables;

	char	**map;

	void	*floor;
	void	*barrier;
	void	*player;
	void	*exit;
	void	*collectable;
	void	*mlx;
	void	*window;

}	t_start;

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;

// ----------- FUNCTIONS ---------- 

int		read_map(t_start *game, char **av);
int		exit_game(t_start *game);
void	check_errors(t_start *game);
void	put_images(t_start *game);
void	put_graphics(t_start *game);
int		controls(int command, t_start *game);

#endif