/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrmapi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:59:15 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 19:11:53 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrmapi(void)
{
	int	res;
	char	*str = "PLANE";

	res = test_ftstrmapi(str, "CYNAR")\
		  && test_ftstrmapi("plane", "cynar")\
		  && test_ftstrmapi("forty-two", "sbegl-gjb")\
		  && test_ftstrmapi("FORTY-TWO", "SBEGL-GJB")\
		  ;
	eval_test("ft_strmapi", res);
}
