#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "room.h"

void	my_putchar(char c);
void	my_put_nbr(int i);
void	my_putstr(char* str);
int	count_line(char *buff);
void	alloc_tab(char **tab, int nb);

int	main() {
  //t_room salle;
  int	map;
  char 	**tab;
  int	i;
  int	j;
  int	k;
  char	buff[1024];
  int	str;
  int	nb_line;

  i = 0;
  j = 0;
  k = 0;
  tab = 0;
  map = open("Maps/cargo_dock.map", O_RDONLY);
  if (map == 0)
    {
      my_putstr("Erreur: cargo_dock.map introuvable");
      return 0;
    }
  str = read(map, buff, 1024);
  buff[str] = '\0';
  nb_line = count_line(buff);
  //alloc_tab(tab, nb_line);
  tab = malloc(nb_line * sizeof(*tab));
  while (i < nb_line) {
    tab[i] = malloc(sizeof(**tab) * 15);
    i++;
    }
  i = 0;
  while (buff[i] != '\0') {
    if (buff[i] == '\n') {
      j++;
      k = 0;
      my_putchar('\n');
    }
    else {
      tab[j][k] = buff[i];
      my_putchar(tab[j][k]);
      k++;
    }
    i++;
  }

  return 0;
}

int	count_line(char *buff) {
  int	i;
  int	nb;
  
  i = 0;
  nb = 0;
  while (buff[i] != '\0') {
    if (buff[i] == '\n') {
      nb++;
    }
    i++;
  }
  return nb;
}
