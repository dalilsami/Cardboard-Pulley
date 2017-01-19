#ifndef _COMMANDE_H_
#define _COMMANDE_H_

struct          s_commande
{
  char          input;
  int           (*commande)(t_player *p, t_room *salle);
};

struct s_commande commandes[8] = {
  {'w', move_up},
  {'a', move_left},
  {'s', move_down},
  {'d', move_right},
  {'q', quit},
  {'c', crouch},
  {' ', get_key},
  {'e', use_key}
};

#endif
