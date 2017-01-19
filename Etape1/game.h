#ifndef	_GAME_H_
#define	_GAME_H_

#include	<stdlib.h>
#include	<fcntl.h>
#include	<unistd.h>
#include	<stdio.h>

typedef struct	s_room
{
  char          **map;
  int		lines;
  struct room   *next;
}               t_room;


typedef struct	s_player
{
  int		posx;
  int		posy;
}		t_player;

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int i);
void	title();
void	free_tab(char **map, int nb);
void	affichage(char **map, int nb, t_player p);
int	count_line(char *buff);
int	deplacement(char input, t_player *p, t_room salle);
int	my_strlen(char *str);
int	init_position(char **map, t_player *p);
int	move_up(t_player *p, t_room salle);
int	move_down(t_player *p, t_room salle);
int	move_left(t_player *p, t_room salle);
int	move_right(t_player *p, t_room salle);
int	quit();
char	*readline();
char	*openMap();
char	**alloc_tab(int nb);
char	**attrib_map(char *buff, char **tab);

#endif
