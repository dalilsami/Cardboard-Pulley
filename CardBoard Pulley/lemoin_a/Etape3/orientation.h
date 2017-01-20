/*
** orientation.h for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape3
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 13:22:35 2017 LE MOINE Adrien
** Last update Fri Jan 20 15:04:06 2017 LE MOINE Adrien
*/

#ifndef		_ORIENTATION_H_
#define		_ORIENTATION_H_

struct          s_orient
{
  char          orientation;
  int           (*commande)(t_guard g, t_player p, t_room salle);
};

struct s_orient o_commandes[4] = {
  {'v', orient_up},
  {'>', orient_left},
  {'^', orient_down},
  {'<', orient_right}
};

#endif
