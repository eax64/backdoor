/*
** test.c for  in /home/eax/cq/backdoor
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Wed Mar 11 22:17:43 2015 eax
** Last update Wed Mar 11 22:43:24 2015 eax
*/

#include <err.h>
#include <stdlib.h>
#include "auth.h"

int	main(int ac, char **av)
{
  user_t user;
  group_t groups;
  access_request_t req;

  if (ac != 3)
    errx(EXIT_FAILURE, "Usage: %s user password", av[0]);

  req.name = av[1];
  req.password = av[2];

  if (auth(&user, &groups, &req) == -1)
    errx(EXIT_FAILURE, "Can't authenticate");
  
  return 0;
}
