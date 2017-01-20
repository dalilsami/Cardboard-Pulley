/*
** commande.h for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape2
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:07:03 2017 LE MOINE Adrien
** Last update Fri Jan 20 10:07:05 2017 LE MOINE Adrien
*/

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
