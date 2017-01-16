#include <unistd.h>
#include <stdio.h>
#include "room.h"

void my_putstr(char* str);

int main() {
  t_room salle;
  FILE *fp;
  char str[60];
  int i = 0;
  
  fp = fopen("Maps/cargo_dock.map", "r");
  if(fp == NULL)
    {
      my_putstr("Erreur: cargo_dock.map introuvable");
      return 0;
    }
  while (fgets(str, 60, fp) != NULL)
    {
      salle.map[i] = str;
      my_putstr(salle.map[i]);
      i++;
    }
  fclose(fp);
  
  return 0;
}
