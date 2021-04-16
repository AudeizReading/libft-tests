/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftmemmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:56:36 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/16 19:23:16 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftmemmove(void)
{
	char	*src = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas nec ante rhoncus felis ullamcorper tincidunt vel quis velit. Fusce sit amet ante tempus augue convallis pharetra eu at ligula. Phasellus bibendum quam placerat, vulputate est vel quam.";
	char	*src2 = "Hey";
	char	*dest_ft = strdup("Beautiful people");
	char	*dest = strdup("Beautiful people");
	int		res;

	res = test_ftmemmove(dest, dest_ft, src, 5)\
		  && test_ftmemmove(dest, dest_ft, dest + 5, 5)\
		  && test_ftmemmove(dest, dest_ft, dest + 9, 5)\
		  && test_ftmemmove(dest, dest_ft, src2, 5)\
		  && test_ftmemmove(dest, dest_ft, src, 12)\
		  && test_ftmemmove(dest, dest_ft, src, 15)\
		  && test_ftmemmove(dest + 10, dest_ft + 10, src2, 5)\
		  && test_ftmemmove(dest, dest_ft, "HEll0", 15);
	/* It does segfault when dst, or src is NULL, and when len bigger than
	** expected, don't do the test here, because I don't know yet get the
	** segfault signal 
	** Tests should be improved for this function*/
	free(dest);
	free(dest_ft);
	eval_test("ft_memmove", res);
}
