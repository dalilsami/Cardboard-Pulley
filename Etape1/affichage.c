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
