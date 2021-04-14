/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftisdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:02:23 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 10:03:04 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftisdigit(void)
{
	int ret = test_ftisdigit('A') && test_ftisdigit('0') && test_ftisdigit(0)\
			  && test_ftisdigit('\n');
	eval_test("ft_isdigit", ret);
}
