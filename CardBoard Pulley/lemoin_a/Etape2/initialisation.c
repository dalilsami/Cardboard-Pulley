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
  return room;
}

/*t_room	*get_access(t_room *base, int i)
{
  t_room	*next_room;
  //int		n;

  next_room = base->next;
  my_put_nbr(i);
  my_putchar('\n');
  n = 0;
  while (n != i && next_room != NULL)
    {
      next_room = next_room->next;
      n++;
      }
  return next_room;
  }*/
