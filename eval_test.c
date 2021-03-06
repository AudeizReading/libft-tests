/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:15:58 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 15:41:48 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_test(char *f_name, int ret_test)
{
	printf("%s : ", f_name);
	if (ret_test)
		printf("%s\t\t\t\t%s[SUCCESS]%s\n", BOLD, GREEN, FANCY_RESET);
	else
		printf("%s\t\t\t\t%s[FAIL]%s\n", BOLD, RED, FANCY_RESET);
}
