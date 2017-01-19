#include	"game.h"

char	*openMap(char *path)
{
  int map;
  int str;
  char *buff;

  buff = malloc(sizeof(char) * 1024);
  map = open(path, O_RDONLY);
  if (map == 0)
    {
      my_putstr("Erreur: ");
      my_putstr(path);
      my_putstr(" introuvable");
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
      tab[i] = malloc(sizeof(**tab) * 26);
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
