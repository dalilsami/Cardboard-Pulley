/*
** initialisation.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape2
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:08:37 2017 LE MOINE Adrien
** Last update Fri Jan 20 10:08:39 2017 LE MOINE Adrien
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
