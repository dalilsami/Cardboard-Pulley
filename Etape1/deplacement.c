/*
** deplacement.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape1
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:11:24 2017 LE MOINE Adrien
** Last update Fri Jan 20 16:52:02 2017 LE MOINE Adrien
*/

#include	"game.h"
#include	"commande.h"

char            *readline()
{
  ssize_t       ret;
  char          *buff;
  
  if ((buff = malloc(sizeof(*buff))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 2)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}

int	deplacement(char input,t_player *p, t_room salle)
{
  int	i;
  int	r;

  i = 0;
  while (i < 5)
    {
      if (commandes[i].input == input)
	{
	  r = commandes[i].commande(p, salle);
	  my_putchar('\n');
	  return r;
	}
      i++;
    }
  return 1;
}
