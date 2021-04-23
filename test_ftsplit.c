/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:03:02 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/20 11:17:42 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int	test_ftsplit(char *str, int sep)
{
	char	**tab;
	int		i;

	/* Uncomment for debugging */
	if (str)
	{
		printf("Number found words: %s%s%d%s\n", BOLD, GREEN, ft_cntwds(str, (char)sep), FANCY_RESET);
		tab = ft_split(str, sep);
		i = 0;
		while (tab[i])
		{
			printf("\ttab[%d]: %s\t\tlength: %ld\n", i, tab[i],	strlen(tab[i]));
			i++;
		}
		if (tab[i] == NULL)
			printf("\ttab[%d] is NULL\n", i);
		while (i >= 0)
			free(tab[i--]);
		free(tab);
		return (1);
	}
	else
	{
		i = 0;
		if ((tab = ft_split(str, sep)) == NULL)
		{
			printf("Number found words: %s%s0%s\n", BOLD, GREEN, FANCY_RESET);
			printf("\ttab is NULL\n");
			return (1);
		}
		else
		{
			
			printf("Number found words: %s%s%d%s\n", BOLD, RED, ft_cntwds(str, (char)sep), FANCY_RESET);
			printf("Your tab should return NULL, but here we are what it is found :\n");
			while (tab[i])
			{
				printf("\ttab[%d]: %s, length: %ld\n", i, tab[i], strlen(tab[i]));
				i++;
			}
			if (tab[i] == NULL)
				printf("\ttab[%d] is NULL\n", i);
			while (i >= 0)
				free(tab[i--]);
			free(tab);
			return (0);
		}
	}
}
