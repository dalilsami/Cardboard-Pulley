#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "room.h"

int count_lines(FILE *file);
void my_putstr(char* str);

int main() {
  t_room salle;
  int map;
  int nb_line;
  char str[60];
  int i;

  i = 0;
  map = open("Maps/cargo_dock.map", O_RDONLY);
  if(map == NULL)
    {
      my_putstr("Erreur: cargo_dock.map introuvable");
      return 0;
    }
  //nb_line = count_lines(map);
  nb_line = 18;
  salle.map = malloc(sizeof(str) * nb_line);
  fseek(map, 0, 0);
  while (fgets(str, 60, map) != NULL)
    {
      salle.map[i] = str;
      my_putstr(salle.map[i]);
      i++;
    }
  fclose(map);
  free(salle.map);
  return 0;
}

int count_lines(FILE *file) {
  char c;
  int lines;

  lines = 0;
  while ((c = getc(file)) != EOF) {
    if (c == '\n')
      ++lines;
  }
  return lines;
}
