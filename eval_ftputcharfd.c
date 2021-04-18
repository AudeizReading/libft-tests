/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftputcharfd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:48:33 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 15:37:05 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftputcharfd(void)
{
	int		res;

	res = test_ftputcharfd('C') && test_ftputcharfd('\n')\
		  && test_ftputcharfd(0) && test_ftputcharfd('i')\
		  && test_ftputcharfd(32) && test_ftputcharfd(65)\
		  ;
	eval_test("ft_putchar_fd", res);
}
