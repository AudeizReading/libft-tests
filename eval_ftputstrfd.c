/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftputstrfd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:58:07 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 16:35:17 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftputstrfd(void)
{
	int		res;

	res = test_ftputstrfd("Hello") && test_ftputstrfd("Forty\nTwo\n")\
		  && test_ftputstrfd(0) && test_ftputstrfd("Hello\0I'm hidden\n")\
		  ;
	eval_test("ft_putstr_fd", res);
}
