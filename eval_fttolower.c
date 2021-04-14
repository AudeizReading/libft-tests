/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_fttolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:13:47 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 11:39:11 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_fttolower(void)
{
	int ret = test_fttolower('A') && test_fttolower('0') && test_fttolower(0)\
			  && test_fttolower('a') && test_fttolower('\n') && test_fttolower(128);
	eval_test("ft_tolower", ret);
}
