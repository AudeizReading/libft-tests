/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrtrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:43:03 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/12 14:38:32 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftstrtrim(char *str, char *sep, char *expected)
{
	int result = 0;
	char	*ret = ft_strtrim(str, sep);
	/* Uncomment for debugging */
/*	printf("%s%s", BOLD, YELLOW);
	if (sep)
		printf("sep :\t%s\n", sep);
	else
		printf("sep :\tNULL\n");
	printf("%s%s", BOLD, MAGENTA);
	if (str)
		printf("str :\t%s\n", str);
	else
		printf("str :\tNULL\n");
	printf("%s%s", BOLD, CYAN);
	if (ret)
		printf("ret :\t%s\n", ret);
	else
		printf("ret :\tNULL\n");
	printf("%s%s", BOLD, GREEN);
	if (expected)
		printf("expected :\t%s\n", expected);
	else
		printf("expected :\tNULL\n");
	printf("%s", FANCY_RESET);*/
	if (ret && expected)
	{
		if (!strcmp(ret, expected))
		{
			/*printf("Size of return of ft_strtrim :\t%s%s%ld%s\n", BOLD, GREEN, strlen(ret), FANCY_RESET);
			printf("Size expected :\t%s%s%ld%s\n", BOLD, GREEN, strlen(expected), FANCY_RESET);*/
			result = 1;
		}
	/*	else
		{
			printf("Size of return of ft_strtrim :\t%s%s%ld%s\n", BOLD, RED, strlen(ret), FANCY_RESET);
			printf("Size expected :\t%s%s%ld%s\n", BOLD, RED, strlen(expected), FANCY_RESET);
		}*/

	}
	else if (ret == expected)
	{
		/*	printf("Size of return of ft_strtrim :\t%s%s0%s\n", BOLD, GREEN, FANCY_RESET);
			printf("Size expected :\t%s%s0%s\n", BOLD, GREEN, FANCY_RESET);*/
			result = 1;
	}
/*	else
	{
			printf("Size of return of ft_strtrim :\t%s%s0%s\n", BOLD, RED, FANCY_RESET);
			printf("Size expected :\t%s%s0%s\n", BOLD, RED, FANCY_RESET);
	}*/
	/* Si ca segfault, il est possible que ret ne soit pas malloc -> c'est une
	** erreur */
	free(ret);
	return (result);
}
