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

int	deplacement(char input,t_player *p, t_room *salle)
{
  int i;
  int r;

  i = 0;
  while (i < 8)
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