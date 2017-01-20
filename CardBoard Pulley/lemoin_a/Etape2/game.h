/*
** game.h for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape2
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:08:03 2017 LE MOINE Adrien
** Last update Fri Jan 20 16:52:37 2017 LE MOINE Adrien
*/

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
  int		dx;
  int		dy;
  struct s_room   *next;
}               t_room;


typedef struct	s_player
{
  int		posx;
  int		posy;
  int		keys;
  int		crouch;
}		t_player;

void		my_putchar(char c);
void		my_putstr(char *str);
void		my_put_nbr(int i);
void		title();
void		free_tab(char **map, int nb);
void		affichage(t_room *salle, t_player p);
int		game(t_player p, t_room *room);
int		count_line(char *buff);
int		deplacement(char input, t_player *p, t_room *salle);
int		my_strlen(char *str);
int		init_position(t_room *salle, t_player *p);
int		move_up(t_player *p, t_room *salle);
int		move_down(t_player *p, t_room *salle);
int		move_left(t_player *p, t_room *salle);
int		move_right(t_player *p, t_room *salle);
int		quit();
int		crouch(t_player *p, t_room *salle);
int		get_key(t_player *p, t_room *salle);
int		use_key(t_player *p, t_room *salle);
char		*readline();
char		*openMap(char *path);
char		**alloc_tab(int nb);
char		**attrib_map(char *buff, char **tab);
t_room		*init_room(char *path, int dx, int dy);
t_room		*get_access(t_room *base, int i);
t_player	init_player(t_room *salle);

#endif
