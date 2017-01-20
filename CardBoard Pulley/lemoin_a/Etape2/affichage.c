/*
** affichage.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape2
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:06:29 2017 LE MOINE Adrien
** Last update Fri Jan 20 10:06:31 2017 LE MOINE Adrien
*/

#include	"game.h"

void	affichage(t_room *salle, t_player p)
{
  int	i;
  int	j;

  i = 0;
  while (i < salle->lines)
    {
      j = 0;
      while (j < my_strlen(salle->map[i]))
	{
	  if (i == p.posy && j == p.posx)
	    if (p.crouch == -1)
	      my_putchar('i');
	    else
	      my_putchar('_');
	  else
	    my_putchar(salle->map[i][j]);
	  j++;
	}
      my_putchar('\n');
      i++;
    }
}

int	init_position(t_room *salle, t_player *p) {
  int	i;
  int	j;

  i = 0;
  p->posy = 0;
  p->posx = 0;
  while (i < salle->lines)
    {
      j = 0;
      while (j < my_strlen(salle->map[i]))
	{
	  if (salle->map[i][j] == 'O')
	    {
	      p->posx = j;
	      p->posy = i;
	      return 1;
	    }
	  j++;
	}
      i++;
    }
  p->posy = salle->dy;
  p->posx = salle->dx;
  return 0;
}
