#include "game.h"

int	main() {
  t_room	salle;
  t_player	joueur;
  char		*buff;
  int		nb_line;
  char		*input;

  joueur.posx = 0;
  joueur.posy = 0;
  buff = openMap();
  nb_line = count_line(buff);
  salle.map = alloc_tab(nb_line);
  salle.map = attrib_map(buff, salle.map);
  title();
  init_position(salle.map, &joueur);
  while (1)
    {
      input = "";
      while (deplacement(input[0], &joueur, salle.map))
	{
	  affichage(salle.map, nb_line, joueur);
	  input = readline();
	  my_putstr("\033[H\033[2J");
	}
    }
  free_tab(salle.map, nb_line);
  
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
