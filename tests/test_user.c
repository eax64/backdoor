/*
** test1.c for  in /home/eax/cq/bla/backdoor
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Wed Mar 11 23:28:16 2015 eax
** Last update Thu Mar 12 03:12:50 2015 eax
*/

#include <stdlib.h>
#include <stdio.h>
#include "auth.h"
#include "group.h"
#include "user.h"
#include "test.h"

/*
** password differ
** It should return -1
*/

int	user_test1()
{
  group_t *groups = NULL;
  user_t *users = NULL;
  access_request_t req;

  group_add(&groups, "group1", 2, 42);
  user_add(&users, "user1", "pwd1", (int [5]){2, -1}, 43);
  user_add(&users, "user2", "failpwd", (int [5]){2, -1}, 44);
  req.name = "user1";
  req.password = "failpwd";

  return TEST_ASSERT(users, groups, &req, -1);
}

/*
** unknown username
** It should return -1
*/

int	user_test2()
{
  group_t *groups = NULL;
  user_t *users = NULL;
  access_request_t req;

  group_add(&groups, "group1", 2, 42);
  user_add(&users, "user1", "pwd1", (int [5]){2, -1}, 43);
  user_add(&users, "user2", "pwd2", (int [5]){2, -1}, 44);
  req.name = "failuser1";
  req.password = "pwd1";

  return TEST_ASSERT(users, groups, &req, -1);
}

/*
** good username/password
** It should return 43
*/

int	user_test3()
{
  group_t *groups = NULL;
  user_t *users = NULL;
  access_request_t req;

  group_add(&groups, "group1", 2, 42);
  user_add(&users, "user0", "pwd0", (int [5]){2, -1}, 42);
  user_add(&users, "user1", "pwd1", (int [5]){2, -1}, 43);
  user_add(&users, "user2", "pwd2", (int [5]){2, -1}, 44);
  req.name = "user1";
  req.password = "pwd1";

  return TEST_ASSERT(users, groups, &req, 43);
}
