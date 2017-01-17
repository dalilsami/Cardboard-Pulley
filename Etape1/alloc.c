#include <stdlib.h>

char	***alloc_tab(int nb) {
  int	i;
  char	**tab;

  i = 0;
  tab = malloc(nb * sizeof(*tab));
  while (i < nb) {
    tab[i] = malloc(sizeof(**tab) * 15);
  }
  return &tab;
}
