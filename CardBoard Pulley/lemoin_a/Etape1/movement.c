/*
** movement.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape1
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:14:11 2017 LE MOINE Adrien
** Last update Fri Jan 20 10:14:13 2017 LE MOINE Adrien
*/

#include	"game.h"

int	move_up(t_player *p, t_room salle)
{
  if (p->posy == 0)
      return 2;
  else if (salle.map[p->posy - 1][p->posx] == 'X')
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

int	move_down(t_player *p, t_room salle)
{
  if (p->posy == (salle.lines - 1))
    return 2;
  else if (salle.map[p->posy + 1][p->posx] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur\n");
      return 1;
    }
  else
    {
      p->posy = p->posy + 1;
      return 0;
    }
}

int	move_left(t_player *p, t_room salle)
{
  if (p->posx == 0)
    return 2;
  else if (salle.map[p->posy][p->posx - 1] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur\n");
      return 1;
    }
  else
    {
      p->posx = p->posx - 1;
      return 0;
    }
}

int	move_right(t_player *p, t_room salle)
{
  if (p->posx == (my_strlen(salle.map[p->posy]) - 1))
    return 2;
  else if (salle.map[p->posy][p->posx + 1] == 'X')
    {
      my_putstr("Vous ne pouvez pas aller dans cette direction, \
il y a un mur\n");
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
