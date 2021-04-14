/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftisascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:10:25 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 10:11:10 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftisascii(void)
{
	int ret = test_ftisascii('A') && test_ftisascii('0') && test_ftisascii(0)\
			  && test_ftisascii('\n') && test_ftisascii(128);
	eval_test("ft_isascii", ret);
}
