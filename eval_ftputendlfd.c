/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftputendlfd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 17:03:58 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 17:06:11 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftputendlfd(void)
{
	int		res;

	res = test_ftputendlfd("Hello") && test_ftputendlfd("Forty\nTwo\n")\
		  && test_ftputendlfd(0) && test_ftputendlfd("Hello\0I'm hidden\n")\
		  ;
	eval_test("ft_putendlfd", res);
}
