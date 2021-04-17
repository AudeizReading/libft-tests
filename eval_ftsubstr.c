/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftsubstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:20:52 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 18:36:27 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftsubstr(void)
{
	int	res;
	char	*str = "forty-two";

	res = test_ftsubstr(str, 0, 42000, str)\
		  && test_ftsubstr(str, 0, 0, "")\
		  && test_ftsubstr(str, 5, 7, str + 5)\
		  && test_ftsubstr(str, -1, 20, "")\
		  && test_ftsubstr(NULL, 0, 20, NULL)\
		  && test_ftsubstr(str, 1, 1, "o")\
		  && test_ftsubstr(str, 1000, 1, "")\
		  && test_ftsubstr("1", 42, 4200000000, "")\
		  ;
	eval_test("ft_substr", res);
}
