/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrlcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:23:08 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 17:49:55 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrlcpy(void)
{
	int res;
	char	*src = "Hello";
	char	dest[10];

	res = test_ftstrlcpy(dest, src, 0, "AAAAAAAAAA")\
		  && test_ftstrlcpy(dest, src, 1, "")\
		  && test_ftstrlcpy(dest, src, 2, "H")\
		  && test_ftstrlcpy(dest, src, -1, src)\
		  && test_ftstrlcpy(dest, src, 6, src)\
		  && test_ftstrlcpy(dest, src, 7, src)\
		  && test_ftstrlcpy(dest, src, 8, src)\
		  && test_ftstrlcpy(dest, "", 42, "")\
		  && test_ftstrlcpy(dest, "1", 0, "")\
		  ;
	/* It does segfault if a NULL pointer is given for dest or src */
	/*printf("dest (eval):\t%s\n", dest);*/
	eval_test("ft_strlcpy", res);
}
