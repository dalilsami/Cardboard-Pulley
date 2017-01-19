#include	"game.h"

int	move_up(t_player *p, t_room *salle)
{
  if (p->posy == 0)
      return 2;
  else if (salle->map[p->posy - 1][p->posx] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur.\n");
      return 1;
    }
  else if (salle->map[p->posy - 1][p->posx] == 'x')
    {
      my_putstr("Il y a une porte, vous devez trouver et utiliser la clef.");
      return 1;
    }
  else if (salle->map[p->posy - 1][p->posx] == 'H' && p->crouch < 0)
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un obstacle. Vous devez vous baisser.\n");
      return 1;
    }
  else
    {
      p->posy = p->posy - 1;
      return 0;
   }
}

int	move_down(t_player *p, t_room *salle)
{
  if (p->posy == (salle->lines - 1))
    return 2;
  else if (salle->map[p->posy + 1][p->posx] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur\n");
      return 1;
    }
  else if (salle->map[p->posy + 1][p->posx] == 'x')
    {
      my_putstr("Il y a une porte, vous devez trouver et utiliser la clef.");
      return 1;
    }
  else if (salle->map[p->posy + 1][p->posx] == 'H' && p->crouch < 0)
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un obstacle. Vous devez vous baisser.\n");
      return 1;
    }
  else
    {
      p->posy = p->posy + 1;
      return 0;
    }
}

int	move_left(t_player *p, t_room *salle)
{
  if (p->posx == 0)
    return 2;
  else if (salle->map[p->posy][p->posx - 1] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur\n");
      return 1;
    }
  else if (salle->map[p->posy][p->posx - 1] == 'x')
    {
      my_putstr("Il y a une porte, vous devez trouver et utiliser la clef.");
      return 1;
    }
  else if (salle->map[p->posy][p->posx - 1] == 'H' && p->crouch < 0)
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un obstacle. Vous devez vous baisser.\n");
      return 1;
    }
  else
    {
      p->posx = p->posx - 1;
      return 0;
    }
}

int	move_right(t_player *p, t_room *salle)
{
  if (p->posx == (my_strlen(salle->map[p->posy]) - 1))
    return 2;
  else if (salle->map[p->posy][p->posx + 1] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur\n");
      return 1;
    }
  else if (salle->map[p->posy][p->posx + 1] == 'x')
    {
      my_putstr("Il y a une porte, vous devez trouver et utiliser la clef.");
      return 1;
    }
  else if (salle->map[p->posy][p->posx + 1] == 'H' && p->crouch < 0)
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un obstacle. Vous devez vous baisser.\n");
      return 1;
    }
  else
    {
      p->posx = p->posx + 1;
      return 0;
    }
}

int	quit()
{
  return 2;
}
