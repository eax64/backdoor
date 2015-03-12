/*
** test.c for  in /home/eax/cq/backdoor
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Wed Mar 11 22:17:43 2015 eax
** Last update Thu Mar 12 03:42:04 2015 eax
*/

#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include "auth.h"
#include "test.h"

int	test_assert(user_t *users, group_t *groups, access_request_t *req, int must_ret, char *path)
{
  int ret;
  
  ret = auth(users, groups, req);
  if (ret != must_ret)
    {
      fprintf(stderr, TEST_COLOR_FAIL "[!] Test fail (%s). Shoud have returned %d but returned %d\n" TEST_COLOR_DEFAULT, path, must_ret, ret);
      return -1;
    }
  else
    {
      fprintf(stderr, TEST_COLOR_OK "[ ] Test pass (%s)\n" TEST_COLOR_DEFAULT, path);
      return 0;
    }
  
}

int	main()
{
  user_test1();
  user_test2();
  user_test3();

  group_test1();
  group_test2();
  return 0;
}
