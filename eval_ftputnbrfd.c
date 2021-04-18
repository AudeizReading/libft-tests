/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftputnbrfd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 17:28:28 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 18:30:18 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftputnbrfd(void)
{
	int		res;

	res = test_ftputnbrfd(INT_MIN, "-2147483648")\
		  && test_ftputnbrfd(INT_MAX, "2147483647")\
		  && test_ftputnbrfd(0, "0")\
		  && test_ftputnbrfd(42, "42")\
		  && test_ftputnbrfd(-42, "-42")\
		  ;
	eval_test("ft_putnbrfd", res);
}
