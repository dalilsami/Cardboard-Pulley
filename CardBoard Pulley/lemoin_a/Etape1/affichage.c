#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "room.h"

void	my_putstr(char *str);
void	my_putchar(char c);
int	my_strlen(char *str);
char	**position(char **map, int *abscisse, int *ordonnee);
void	affichage(char **map);

int	main() {
  int	position_x;
  int	position_y;

  position_x = 0;
  position_y = 0;
  affichage(map);
  position(map, &position_x, &position_y);
  affichage(map);
  return 0;
}

void	affichage(char **map) {
  int	i;
  int	j;

  i = 0;
  while (i < 11) {
    j = 0;
    while (map[i][j]) {
      my_putchar(map[i][j]);
      j++;
    }
    my_putchar('\n');
    i++;
  }
}

char	**position(char **map, int *abscisse, int *ordonnee) {
  int	i;
  int	j;

  i = 0;
  while (i < 12) {
    j = 0;
    while (j < my_strlen(map[i])) {
      if (map[i][j] == 'O') {
	map[i][j] = 'i';
	*abscisse = j;
	*ordonnee = i;
	return map;
      }
      j++;
    }
    i++;
  }
  return 0;
}
