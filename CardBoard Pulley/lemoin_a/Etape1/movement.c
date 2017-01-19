#include	"game.h"

int	move_up(t_player *p, char **map)
{
  if (p->posy == 0)
    {
      return 2;
    }
  else if (map[p->posy - 1][p->posx] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur\n");
      return 1;
    }
  else
    {
      p->posy = p->posy - 1;
      return 0;
    }
}

int	move_down(t_player *p, char **map)
{
  if (map[p->posy + 1][p->posx] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur\n");
      return 1;
    }
  p->posy++;
  return 0;
}

int	move_left(t_player *p, char **map)
{
  if (map[p->posy][p->posx - 1] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur\n");
      return 1;
    }
  p->posx--;
  return 0;
}

int	move_right(t_player *p, char **map)
{
  if (map[p->posy][p->posx + 1] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur\n");
      return 1;
    }
  p->posx++;
  return 0;
}

int	quit(t_player *p, char **map)
{
  my_put_nbr(p->posx);
  my_putchar(map[0][0]);
  return 0;
}
