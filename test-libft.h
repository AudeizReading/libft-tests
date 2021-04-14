/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:45:32 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 18:22:36 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_LIBFT_H
# define TEST_LIBFT_H
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
# define ITALIC "\033[3m"
# define N_ITALIC "\033[23m"
# define BOLD "\033[1m"
# define N_BOLD "\033[21m"
# define UNDERLINED "\033[4m"
# define N_UNDERLINED "\033[24m"
# define FANCY_RESET "\033[0m"
# include "../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include <ctype.h>

int		test_ftsplit(char *str, int sep);
int		test_ftstrtrim(char *str, char *sep, char *expected);
int		test_ftatoi(char *nstr);
int		test_ftisalpha(int c);
int		test_ftisalnum(int c);
int		test_ftisascii(int c);
int		test_ftisdigit(int c);
int		test_ftisascii(int c);
int		test_ftisprint(int c);
int		test_fttolower(int c);
int		test_fttoupper(int c);
int		test_ftstrlen(char *s);
int		test_ftstrnstr(char *haystack, char *needle, size_t len, char *expected);
int		test_ftstrncmp(char *s1, char *s2, size_t len);
int		test_ftstrdup(char *s1);
int		test_ftcalloc(size_t size_of, size_t len);
int		test_ftmemset(void *b1, void *b2, int c, size_t len);
void	eval_ftsplit(void);
void	eval_ftstrtrim(void);
void	eval_ftatoi(void);
void	eval_ftisalpha(void);
void	eval_ftisalnum(void);
void	eval_ftisdigit(void);
void	eval_ftisascii(void);
void	eval_ftisprint(void);
void	eval_fttolower(void);
void	eval_fttoupper(void);
void	eval_ftstrlen(void);
void	eval_ftstrnstr(void);
void	eval_ftstrncmp(void);
void	eval_ftstrdup(void);
void	eval_ftcalloc(void);
void	eval_ftmemset(void);
void	eval_test(char *f_name, int ret_test);
#endif
