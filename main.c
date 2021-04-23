/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:57:14 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/22 19:46:49 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		main(void)
{
	/*char **str = ft_split("***Salut***ca***va***?***", '*');
	char **str = ft_split("***Salut***ca***va***?***bien", '*');
	char **str = ft_split("Salut***ca***va***?***bien", '*');
	char **str = ft_split("Salut***ca***va***?***bien", ' ');
	char **str = ft_split("Salut***ca***va***?***bien", 0);*/
	char **str = ft_split("***Salut***ca***va***?***bien", '*');
	int i = 0;

	while (i < 5)
		printf("%s\n", str[i++]);
	while (i >= 0)
		free(str[i--]);
	free(str);
	launch_tests();
	return (0);
}
