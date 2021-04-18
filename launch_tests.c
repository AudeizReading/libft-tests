/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:15:03 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 19:17:41 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	launch_tests(void)
{
	eval_ftmemset();
	eval_ftbzero();
	eval_ftmemcpy();
	eval_ftmemccpy();
	eval_ftmemcmp();
	eval_ftmemmove();
	eval_ftmemchr();
	eval_ftstrlen();
	eval_ftisalpha();
	eval_ftisdigit();
	eval_ftisalnum();
	eval_ftisascii();
	eval_ftisprint();
	eval_fttoupper();
	eval_fttolower();
	eval_ftstrchr();
	eval_ftstrrchr();
	eval_ftstrncmp();
	eval_ftstrlcpy();
	eval_ftstrlcat();
	eval_ftstrnstr();
	eval_ftatoi();
	eval_ftcalloc();
	eval_ftstrdup();
	eval_ftsubstr();
	eval_ftstrjoin();
	eval_ftstrtrim();
	eval_ftsplit();
	eval_ftitoa();
	eval_ftstrmapi();
	eval_ftputcharfd();
	eval_ftputstrfd();
	eval_ftputendlfd();
	eval_ftputnbrfd();
}
