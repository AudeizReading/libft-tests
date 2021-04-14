/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftcalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:55:04 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 18:03:30 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftcalloc(void)
{
	int	res;
	
	res = test_ftcalloc(sizeof(char), 0) && test_ftcalloc(sizeof(char *), 4096)\
		  && test_ftcalloc(sizeof(int), 100);
	eval_test("ft_calloc", res);
}
