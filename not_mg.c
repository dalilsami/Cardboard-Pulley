#include <unistd.h>
#include <stdio.h>
#include "room.h"

void my_putstr(char* str);

int main() {
  t_room salle;
  FILE *fp;
  int nb_line;
  char str[60];
  int i;
  char c;

  i = 0;
  nb_line = 0;
  fp = fopen("Maps/cargo_dock.map", "r");
  if(fp == NULL)
    {
      my_putstr("Erreur: cargo_dock.map introuvable");
      return 0;
    }
  while ((c = getc(fp)) != EOF){
    if (c == '\n')
        ++nb_line;
    }
  salle.map = malloc(sizeof(str) * nb_line);
  while (fgets(str, 60, fp) != NULL)
    {
      salle.map[i] = str;
      my_putstr(salle.map[i]);
      i++;
    }
  fclose(fp);

  return 0;
}
