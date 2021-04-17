/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftitoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 13:53:18 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 14:07:01 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftitoa(void)
{
	int res;

	res = test_ftitoa(INT_MIN, "-2147483648")\
		  && test_ftitoa(INT_MAX, "2147483647")\
		  && test_ftitoa(0, "0")\
		  && test_ftitoa(42, "42")\
		  && test_ftitoa(-42, "-42")\
		  && test_ftitoa(4242, "4242")\
		  && test_ftitoa(-4242, "-4242");
	eval_test("ft_itoa", res);
}
