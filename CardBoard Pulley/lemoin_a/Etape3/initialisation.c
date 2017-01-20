/*
** initialisation.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape3
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:03:39 2017 LE MOINE Adrien
** Last update Fri Jan 20 15:10:20 2017 LE MOINE Adrien
*/

#include	"game.h"

t_player	init_player(t_room *salle)
{
  t_player	p;

  init_position(salle, &p);
  p.keys = 0;
  p.crouch = -1;
  return p;
}

t_room		*init_room(char *path, int dx, int dy)
{
  t_room        *room;
  char          *buff;

  buff = openMap(path);
  room = malloc(sizeof(t_room));
  room->lines = count_line(buff);
  room->map = alloc_tab(room->lines);
  room->map = attrib_map(buff, room->map);
  room->dx = dx;
  room->dy = dy;
  room->next = NULL;
  free(buff);
  return room;
}

t_guard		init_guard(t_room *salle)
{
  t_guard	guard;

  guard.orientation = 'o';
  guard.posx = 0;
  guard.posy = 0;
  ini_orient(salle, &guard);
  return guard;
}

int		ini_orient(t_room *salle, t_guard *g)
{
  int   i;
  int   j;

  i = 0;
  g->posy = 0;
  g->posx = 0;
  while (i < salle->lines)
    {
      j = 0;
      while (j < my_strlen(salle->map[i]))
	{
	  if (salle->map[i][j] == '<' || salle->map[i][j] == 'v' || \
	      salle->map[i][j] == '^' || salle->map[i][j] == '>')
	    {
	      g->posx = j;
	      g->posy = i;
	      g->orientation = salle->map[i][j];
	      return 1;
	    }
	  j++;
	}
      i++;
    }
  return 0;
}
