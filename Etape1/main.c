/*
** main.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape1
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:13:51 2017 LE MOINE Adrien
** Last update Fri Jan 20 10:13:51 2017 LE MOINE Adrien
*/

#include "game.h"

int	main() {
  t_room	salle;
  t_player	joueur;
  char		*buff;
  char		*input;
  int		ret;
  
  buff = openMap();
  salle.lines = count_line(buff);
  salle.map = alloc_tab(salle.lines);
  salle.map = attrib_map(buff, salle.map);
  salle.next = NULL;
  title();
  init_position(salle.map, &joueur);
  input = "";
  ret = 0;
  while (ret != 2)
    {
      affichage(salle.map, salle.lines, joueur);
      input = readline();
      my_putstr("\033[H\033[2J");
      ret = deplacement(input[0], &joueur, salle);
    }
  my_putstr("To be continued...\n");
  free_tab(salle.map, salle.lines);
  return 0;
}

void	title()
{
  my_putstr("\033[H\033[2J");
  my_putstr("	    _   __      __     __  ___     __        __   ______               \n");
  my_putstr("	   / | / /___  / /_   /  |/  /__  / /_____ _/ /  / ____/__  ____ ______\n");
  my_putstr("	  /  |/ / __ \\/ __/  / /|_/ / _ \\/ __/ __ `/ /  / / __/ _ \\/ __ `/ ___/\n");
  my_putstr("	 / /|  / /_/ / /_   / /  / /  __/ /_/ /_/ / /  / /_/ /  __/ /_/ / /    \n");
  my_putstr("	/_/ |_/\\____/\\__/  /_/  /_/\\___/\\__/\\__,_/_/   \\____/\\___/\\__,_/_/    ");
  my_putstr("\n\n\n");
}
