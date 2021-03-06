/*
** alloc.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape1
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:11:00 2017 LE MOINE Adrien
** Last update Fri Jan 20 16:50:54 2017 LE MOINE Adrien
*/

#include	"game.h"

char	*openMap()
{
  int	map;
  int	str;
  char	*buff;

  buff = malloc(sizeof(char) * 1024);
  map = open("Maps/cargo_dock.map", O_RDONLY);
  if (map == 0)
    {
      my_putstr("Erreur: cargo_dock.map introuvable");
      return 0;
    }
  str = read(map, buff, 1024);
  buff[str] = '\0';
  return buff;
}

char	**attrib_map(char* buff, char **tab)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  while (buff[i] != '\0')
    {
      if (buff[i] == '\n')
	{
	  j++;
	  k = 0;
	}
      else
	{
	  tab[j][k] = buff[i];
	  k++;
	}
      i++;
    }
  return tab;
}

char	**alloc_tab(int nb)
{
  int	i;
  char	**tab;

  i = 0;
  tab = malloc(nb * sizeof(*tab));
  while (i < nb)
    {
      tab[i] = malloc(sizeof(**tab) * 15);
      i++;
    }
  return tab;
}

void	free_tab(char** map, int nb)
{
  int	i;

  i = 0;
  while (i < nb)
    {
      free(map[i]);
      i++;
    }
  free(map);
}

int     count_line(char *buff)
{
  int   i;
  int   nb;

  i = 0;
  nb = 0;
  while (buff[i] != '\0')
    {
      if (buff[i] == '\n')
	{
	  nb++;
	}
      i++;
    }
  return nb;
}
