/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftatoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:53:50 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/12 15:59:38 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftatoi(void)
{
	int	ret = test_ftatoi("-2147483648") && test_ftatoi("2147483647")\
			  && test_ftatoi("+2147483647") && test_ftatoi("----2147483648")\
			  && test_ftatoi("++++2147483647") && test_ftatoi("+-++--2147483647")\
			  && test_ftatoi("-2147483649") && test_ftatoi("2147483648")\
			  && test_ftatoi("0");
	eval_test("ft_atoi", ret);
}
