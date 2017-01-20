/*
** interaction.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape2
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:09:02 2017 LE MOINE Adrien
** Last update Fri Jan 20 10:09:03 2017 LE MOINE Adrien
*/

#include	"game.h"

int	crouch(t_player *p, t_room *salle)
{
  if (salle->map[p->posy][p->posx] != 'H')
    {
      p->crouch = p->crouch * -1;
      return 1;
    }
  else {
    my_putstr("Vous ne pouvez pas vous relever\n");
    return 0;
  }
}

int	get_key(t_player *p, t_room *salle)
{
  if (salle->map[p->posy][p->posx] == 'K')
    {
      salle->map[p->posy][p->posx] = ' ';
      p->keys = p->keys + 1;
      return 0;
    }
  else
    {
      my_putstr("Il n'y a pas de clef ici, cherchez encore.");
      return 1;
    }
}

int	use_key(t_player *p, t_room *salle)
{
  char	**m;
  int	px;
  int	py;

  m = salle->map;
  px = p->posx;
  py = p->posy;
  if (m[py - 1][px] == 'x')
    {
      salle->map[py - 1][px] = ' ';
      p->keys = p->keys - 1;
      return 1;
    }
  if (m[py][px + 1] == 'x')
    {
      salle->map[py][px + 1] = ' ';
      p->keys = p->keys - 1;
      return 1;
    }
  if (m[py + 1][px] == 'x')
    {
      salle->map[py + 1][px] = ' ';
      p->keys = p->keys - 1;
      return 1;
    }
  if (m[py][px - 1] == 'x')
    {
      salle->map[py][px - 1] = ' ';
      p->keys = p->keys - 1;
      return 1;
    }
  my_putstr("Il n'y pas de porte autour de vous.\n");
  return 0;
}
