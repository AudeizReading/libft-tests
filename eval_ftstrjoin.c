/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:36:29 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 12:16:34 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrjoin(void)
{
	int	res;
	char	*str1 = "forty-two";
	char	*str2 = " moulinette\n";

	res = test_ftstrjoin(str1, str2, "forty-two moulinette\n")\
		  && test_ftstrjoin(str1 + 5, str2 + 5, "-twoinette\n")\
		  && test_ftstrjoin(str1 + 7, str2 + 4, "wolinette\n")\
		  && test_ftstrjoin(str2, str1, " moulinette\nforty-two")\
		  && test_ftstrjoin(NULL, NULL, NULL)\
		  && test_ftstrjoin(NULL, str2, NULL)\
		  && test_ftstrjoin(str1, NULL, NULL)\
		  && test_ftstrjoin(str1, "", str1)\
		  && test_ftstrjoin("", str2, str2)\
		  && test_ftstrjoin("1", str2, "1 moulinette\n")\
		  ;
	eval_test("ft_strjoin", res);
}
