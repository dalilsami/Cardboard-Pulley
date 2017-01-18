/*
  Cette fonction permet de récuper une ligne
  de moins de 50 caracteres sur l'entrée standard.
  La fonction ne prend pas de paramètre et renvoi une chaine
  allouée (pensez a free()).
*/

char		*readline()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff)) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 1)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
