/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 20:14:57 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 20:56:01 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrlcat(void)
{
	int	res;
	char	*src = "nette";
	char	dst[250] = "Mouli";

	res = test_ftstrlcat(dst, src, sizeof(dst[250]) / sizeof(dst), "Mouli")\
		  && test_ftstrlcat(dst, src, 250, "Moulinette")\
		  && test_ftstrlcat(dst, src, 0, "Mouli")\
		  && test_ftstrlcat(dst, src, 7, "Moulin")\
		  && test_ftstrlcat(dst, src, 1, "Mouli")\
		  && test_ftstrlcat(dst, src, 2, "Mouli")\
		  && test_ftstrlcat(dst, src, -1, "Moulinette")\
		  && test_ftstrlcat(dst, "", 5, "Mouli")\
		  && test_ftstrlcat(dst, "", 42, "Mouli")\
		  ;
	eval_test("ft_strlcat", res);
}
