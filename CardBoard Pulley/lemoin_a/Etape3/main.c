#include "game.h"

int		main() {
  t_room	*salle;
  t_room	*baseSalle;
  t_room	*tmp;
  t_player	joueur;
  //int		i;

  baseSalle = init_room("Maps/cargo_dock.map", 0, 0);
  tmp = baseSalle;
  salle = init_room("Maps/holding_cells.map", 0, 3);
  tmp->next = salle;
  tmp = salle;
  salle = init_room("Maps/holding_cells2.map", 17, 1);
  tmp->next = salle;
  tmp = salle;
  salle = init_room("Maps/warehouse.map", 15, 7);
  tmp->next = salle;
  tmp = salle;
  salle = init_room("Maps/warehouse2.map", 15, 7);
  tmp->next = salle;
  tmp = salle;
  salle = baseSalle;
  joueur = init_player(salle);
  //i = 0;
  title();
  while (salle != NULL)
    {
      game(joueur, salle);
      salle = salle->next;
      //salle = get_access(baseSalle, 1);
      //i++;
    }
  my_putstr("To be continued...\n");
  free_tab(salle->map, salle->lines);
  free(salle);
  return 0;
}

void	game(t_player p, t_room *room)
{
  char	*input;
  int	ret;

  init_position(room, &p);
  input = "";
  ret = 0;
  while (ret != 2)
    {
      affichage(room, p);
      input = readline();
      my_putstr("\033[H\033[2J");
      ret = deplacement(input[0], &p, room);
    }
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
