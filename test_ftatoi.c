/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftatoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:42:51 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/12 15:52:02 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int	test_ftatoi(char *nstr)
{
	int	ret = 0;

	if (nstr == NULL)
	{
		printf("The argument is NULL. atoi doesn't take NULL argument.\n");
		return (-1);
	}
	if (ft_atoi(nstr) == atoi(nstr))
		ret = 1;
	else
	{
		printf("Your function returns : %d\n", ft_atoi(nstr));
		printf("atoi function returns : %d\n", atoi(nstr));
	}
	return (ret);
}
