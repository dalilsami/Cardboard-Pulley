/*
** main.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape2
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:09:17 2017 LE MOINE Adrien
** Last update Fri Jan 20 16:52:26 2017 LE MOINE Adrien
*/

#include "game.h"

int		main()
{
  t_room	*salle;
  t_room	*baseSalle;
  t_room	*tmp;
  t_player	joueur;
  int		ret;

  baseSalle = init_room("Maps/cargo_dock.map", 0, 0);
  tmp = baseSalle;
  salle = init_room("Maps/holding_cells.map", 0, 3);
  tmp->next = salle;
  tmp = salle;
  salle = init_room("Maps/holding_cells2.map", 17, 1);
  tmp->next = salle;
  tmp = salle;
  salle = baseSalle;
  joueur = init_player(salle);
  ret = 0;
  title();
  while (salle != NULL && ret != 3)
    {
      ret = game(joueur, salle);
      salle = salle->next;
    }
  my_putstr("To be continued...\n");
  salle = baseSalle;
  while (salle != NULL)
    {
      free_tab(salle->map, salle->lines);
      free(salle);
      salle = salle->next;
    }
  return 0;
}

int	game(t_player p, t_room *room)
{
  char	*input;
  int	ret;

  init_position(room, &p);
  input = "";
  ret = 0;
  while (ret < 2)
    {
      affichage(room, p);
      input = readline();
      my_putstr("\033[H\033[2J");
      ret = deplacement(input[0], &p, room);
      free(input);
    }
  return ret;
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
