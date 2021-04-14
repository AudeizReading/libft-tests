/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftisprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:14:29 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 10:14:59 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftisprint(void)
{
	int ret = test_ftisprint('A') && test_ftisprint('0') && test_ftisprint(0)\
			  && test_ftisprint('\n') && test_ftisprint(128);
	eval_test("ft_isprint", ret);
}
