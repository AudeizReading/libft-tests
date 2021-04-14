/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:01:15 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 15:07:18 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrncmp(void)
{
	int res;
	char *s1 = "the cake is a lie !\0I'm hidden lol\r\n";
	char *s2 = "there is no stars in the sky";
	char *s3 = "omg1||||||||||||||||";
	char *s4 = "omg3";
	char *s5 = "";
	char *s6 = "AAAAAA";
	char *s7 = "omg1";
	char *s8 = "omg3                ";

	res = test_ftstrncmp(s1, s2, strlen(s1))\
		  && test_ftstrncmp(s3, s4, strlen(s4))\
		  && test_ftstrncmp(s5, s6, strlen(s6))\
		  && test_ftstrncmp(s7, s8, 100000);
	eval_test("ft_strncmp", res);
}
