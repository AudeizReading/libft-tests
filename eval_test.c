/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:15:58 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/12 10:34:43 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_test(char *f_name, int ret_test)
{
	printf("%s : ", f_name);
	if (ret_test)
		printf("%s%s[SUCCESS]%s\n", BOLD, GREEN, FANCY_RESET);
	else
		printf("%s%s[FAIL]%s\n", BOLD, RED, FANCY_RESET);
}
