/*
** affichage.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape1
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:10:49 2017 LE MOINE Adrien
** Last update Fri Jan 20 10:10:50 2017 LE MOINE Adrien
*/

#include	"game.h"

void	affichage(char **map, int nb, t_player p)
{
  int	i;
  int	j;

  i = 0;
  while (i < nb)
    {
      j = 0;
      while (j < my_strlen(map[i]))
	{
	  if (i == p.posy && j == p.posx)
	    my_putchar('i');
	  else
	    my_putchar(map[i][j]);
	  j++;
	}
      my_putchar('\n');
      i++;
    }
}

int	init_position(char **map, t_player *p) {
  int	i;
  int	j;

  i = 0;
  p->posy = 0;
  p->posx = 0;
  while (i < 12)
    {
      j = 0;
      while (j < my_strlen(map[i]))
	{
	  if (map[i][j] == 'O')
	    {
	      p->posx = j;
	      p->posy = i;
	      return 1;
	    }
	  j++;
	}
      i++;
    }
  return 0;
}
