/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:18:00 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 17:29:37 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrdup(void)
{
	int	ret;

	ret = test_ftstrdup("Hello") && test_ftstrdup("Hello\0String hidden")\
		  && test_ftstrdup("abcdefghijklmnopqrstuvwxyz0123456789");
	/* If you pass NULL to ft_strdup, it is an undefined behavior you get like
	** segfault */
	eval_test("ft_strdup", ret);
}
