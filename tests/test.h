/*
** test.h for  in /home/eax/cq/bla/backdoor
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Thu Mar 12 02:01:26 2015 eax
** Last update Thu Mar 12 03:12:57 2015 eax
*/

#ifndef TEST_H_
#define TEST_H_

#include "auth.h"


#define _TEST_TOK2STR_(t) #t
#define _TEST_TOK2STR(t) _TEST_TOK2STR_(t)

#define TEST_ASSERT(u, g, req, must) test_assert(u, g, req, must, __FILE__ ":" _TEST_TOK2STR(__LINE__))

#define TEST_COLOR_DEFAULT "\033[0m"
#define TEST_COLOR_FAIL "\033[31m"
#define TEST_COLOR_OK "\033[32m"

int	test_assert(user_t *users, group_t *groups, access_request_t *req, int must_ret, char *path);

int	user_test1();
int	user_test2();
int	user_test3();

int	group_test1();
int	group_test2();
int	group_test3();

#endif
