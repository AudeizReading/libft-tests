/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:57:14 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/09 23:08:13 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		/* ft_pustr_fd, ft_putchar_fd, ft_putendl_fd, ft_putnbr_fd */
		printf("Tests sur ft_putchar/putstr/putendl/putnbr_fd:\n");
		++argv;
		printf("ft_putstr: *argv\tft_putchar: \\n\n");
		ft_putstr_fd(*argv, 1);
		ft_putchar_fd('\n', 1);
		printf("ft_putendl: *argv\n");
		ft_putendl_fd(*argv, 1);
		printf("ft_putnbr: argc\n");
		ft_putnbr_fd(argc, 1);
		printf("\nft_putnbr: INT_MIN\n");
		ft_putnbr_fd(INT_MIN, 1);
		printf("\nft_putnbr: INT_MAX\n");
		ft_putnbr_fd(INT_MAX, 1);
		printf("\nft_putchar: **argv\n");

		/* ft_isalpha, ft_putchar_fd */
		if (!isalpha(**argv) && ft_isalpha(**argv) == isalpha(**argv))
		{
			while (ft_isalpha(**argv))
			{
				ft_putchar_fd(**argv, 1);
				(*argv)++;
			}
		}	
		printf("\nft_putchar: ascii -125\n");
		ft_putchar_fd(-125, 1);
		ft_putchar_fd('\n', 1);

		/* ft_isalpha */
		if (!isalpha('A') && ft_isalpha('A') != isalpha('A'))
		{
			printf("FAILED: ft_isalpha\n");
			printf("ft_isalpha: \t%d\n", ft_isalpha('A'));
			printf("isalpha: \t%d\n", isalpha('A'));
		}
		else if (!isalpha('0') && ft_isalpha('0') != isalpha('0'))
		{
			printf("FAILED: ft_isalpha\n");
			printf("ft_isalpha: \t%d\n", ft_isalpha('0'));
			printf("isalpha: \t%d\n", isalpha('0'));
		}
		else
		{
			printf("SUCCESS: ft_isalpha\n");
		}

		/* ft_tolower */
		if (!tolower('A') && ft_tolower('A') != tolower('A'))
		{
			printf("FAILED: ft_tolower\n");
			printf("ft_tolower: \t%d\n", ft_tolower('A'));
			printf("tolower: \t%d\n", tolower('A'));
		}
		else if (!tolower('a') && ft_tolower('a') != tolower('a'))
		{
			printf("FAILED: ft_tolower\n");
			printf("ft_tolower: \t%d\n", ft_tolower('a'));
			printf("tolower: \t%d\n", tolower('a'));
		}
		else
		{
			printf("SUCCESS: ft_tolower\n");
		}

		/* ft_toupper */
		if (!tolower('a') && ft_toupper('a') != toupper('a'))
		{
			printf("FAILED: ft_toupper\n");
			printf("ft_toupper: \t%d\n", ft_toupper('a'));
			printf("toupper: \t%d\n", toupper('a'));
		}
		else if (!tolower('A') && ft_toupper('A') != toupper('A'))
		{
			printf("FAILED: ft_toupper\n");
			printf("ft_toupper: \t%d\n", ft_toupper('A'));
			printf("toupper: \t%d\n", toupper('A'));
		}
		else
		{
			printf("SUCCESS: ft_toupper\n");
		}

		/* ft_isdigit */
		if (!isdigit('A') && ft_isdigit('A') != isdigit('A'))
		{
			printf("FAILED: ft_isdigit\n");
			printf("ft_isdigit: \t%d\n", ft_isdigit('A'));
			printf("isdigit: \t%d\n", isdigit('A'));
		}
		else if (!isdigit('0') && ft_isdigit('0') != isdigit('0'))
		{
			printf("FAILED: ft_isdigit\n");
			printf("ft_isdigit: \t%d\n", ft_isdigit('0'));
			printf("isdigit: \t%d\n", isdigit('0'));
		}
		else
		{
			printf("SUCCESS: ft_isdigit\n");
		}

		/* ft_isalnum */
		if (!isalnum('A') && ft_isalnum('A') != isalnum('A'))
		{
			printf("FAILED: ft_isalnum\n");
			printf("ft_isalnum: \t%d\n", ft_isalnum('A'));
			printf("isalnum: \t%d\n", isalnum('A'));
		}
		else if (!isalnum('0') && ft_isalnum('0') != isalnum('0'))
		{
			printf("FAILED: ft_isalnum\n");
			printf("ft_isalnum: \t%d\n", ft_isalnum('0'));
			printf("isalnum: \t%d\n", isalnum('0'));
		}
		else if (!isalnum('\n') && ft_isalnum('\n') != isalnum('\n'))
		{
			printf("FAILED: ft_isalnum\n");
			printf("ft_isalnum: \t%d\n", ft_isalnum('\n'));
			printf("isalnum: \t%d\n", isalnum('\n'));
		}
		else
		{
			printf("SUCCESS: ft_isalnum\n");
		}
		
		/* ft_isascii */
		if (!isascii('A') && ft_isascii('A') != isascii('A'))
		{
			printf("FAILED: ft_isascii\n");
			printf("ft_isascii: \t%d\n", ft_isascii('A'));
			printf("isascii: \t%d\n", isascii('A'));
		}
		else if (!isascii('0') && ft_isascii('0') != isascii('0'))
		{
			printf("FAILED: ft_isascii\n");
			printf("ft_isascii: \t%d\n", ft_isascii('0'));
			printf("isascii: \t%d\n", isascii('0'));
		}
		else if (!isascii(128) && ft_isascii(128) != isascii(128))
		{
			printf("FAILED: ft_isascii\n");
			printf("ft_isascii: \t%d\n", ft_isascii('\n'));
			printf("isascii: \t%d\n", isascii('\n'));
		}
		else
		{
			printf("SUCCESS: ft_isascii\n");
		}
		/* ft_isprint */
		if (!isprint('A') && ft_isprint('A') != isprint('A'))
		{
			printf("FAILED: ft_isprint\n");
			printf("ft_isprint: \t%d\n", ft_isprint('A'));
			printf("isprint: \t%d\n", isprint('A'));
		}
		else if (!isprint('0') && ft_isprint('0') != isprint('0'))
		{
			printf("FAILED: ft_isprint\n");
			printf("ft_isprint: \t%d\n", ft_isprint('0'));
			printf("isprint: \t%d\n", isprint('0'));
		}
		else if (!isprint(128) && ft_isprint(128) != isprint(128))
		{
			printf("FAILED: ft_isprint\n");
			printf("ft_isprint: \t%d\n", ft_isprint(128));
			printf("isprint: \t%d\n", isprint(128));
		}
		else if (!isprint('\n') && ft_isprint('\n') != isprint('\n'))
		{
			printf("FAILED: ft_isprint\n");
			printf("ft_isprint: \t%d\n", ft_isprint('\n'));
			printf("isprint: \t%d\n", isprint('\n'));
		}
		else
		{
			printf("SUCCESS: ft_isprint\n");
		}

		/* ft_strlen */
		if (ft_strlen("Alleluiah!") != strlen("Alleluiah!"))
		{
			printf("FAILED: ft_strlen\n");
			printf("ft_strlen: \t%ld\n", ft_strlen("Alleluiah!"));
			printf("strlen: \t%ld\n", strlen("Alleluiah!"));
		}
		else if (ft_strlen("\0") != strlen("\0"))
		{
			printf("FAILED: ft_strlen\n");
			printf("ft_strlen: \t%ld\n", ft_strlen("0"));
			printf("strlen: \t%ld\n", strlen("0"));
		}
		else if (ft_strlen("abcdefghijklmnopqrstuvwxyz") !=	strlen("abcdefghijklmnopqrstuvwxyz"))
		{
			printf("FAILED: ft_strlen\n");
			printf("ft_strlen: \t%ld\n", ft_strlen("abcdefghijklmnopqrstuvwxyz"));
			printf("strlen: \t%ld\n", strlen("abcdefghijklmnopqrstuvwxyz"));
		}
		else
		{
			printf("SUCCESS: ft_strlen\n");
		}
	}
	/* ft_strncmp */
	char *s_ncmp1 = "the cake is a lie !\0I'm hidden lol\r\n";
	char *s_ncmp2 = "there is no stars in the sky";
	size_t size_ncmp1 = strlen("the cake is a lie !\0I'm hidden lol\r\n");
	char *s_ncmp3 = "omg1||||||||||||||||";
	char *s_ncmp4 = "omg3";
	size_t size_ncmp2 = 4;
	char *s_ncmp5 = "";
	char *s_ncmp6 = "AAAAAA";
	size_t size_ncmp3 = 6;
	char *s_ncmp7 = "omg1";
	char *s_ncmp8 = "omg3                ";
	size_t size_ncmp4 = 100000;


	if (ft_strncmp(s_ncmp1, s_ncmp2, size_ncmp1) != strncmp(s_ncmp1, s_ncmp2, size_ncmp1))
	{
		printf("FAILED: ft_strncmp\n");
		printf("ft_strncmp: \t%d\n", ft_strncmp(s_ncmp1, s_ncmp2, size_ncmp1));
		printf("strncmp: \t%d\n", strncmp(s_ncmp1, s_ncmp2, size_ncmp1));
	}
	else if (ft_strncmp(s_ncmp3, s_ncmp4, size_ncmp2) != strncmp(s_ncmp3, s_ncmp4, size_ncmp2))
	{
		printf("FAILED: ft_strncmp\n");
		printf("ft_strncmp: \t%d\n", ft_strncmp(s_ncmp3, s_ncmp4, size_ncmp2));
		printf("strncmp: \t%d\n", strncmp(s_ncmp3, s_ncmp4, size_ncmp2));
	}
	else if (ft_strncmp(s_ncmp5, s_ncmp6, size_ncmp3) != strncmp(s_ncmp5, s_ncmp6, size_ncmp3))
	{
		printf("FAILED: ft_strncmp\n");
		printf("ft_strncmp: \t%d\n", ft_strncmp(s_ncmp5, s_ncmp6, size_ncmp3));
		printf("strncmp: \t%d\n", strncmp(s_ncmp5, s_ncmp6, size_ncmp3));
	}
	else if (ft_strncmp(s_ncmp7, s_ncmp8, size_ncmp4) != strncmp(s_ncmp7, s_ncmp8, size_ncmp4))
	{
		printf("FAILED: ft_strncmp\n");
		printf("ft_strncmp: \t%d\n", ft_strncmp(s_ncmp7, s_ncmp8, size_ncmp4));
		printf("strncmp: \t%d\n", strncmp(s_ncmp7, s_ncmp8, size_ncmp4));
	}
	else
	{
		printf("SUCCESS: ft_strncmp\n");
	}

	/* ft_atoi */

	if (ft_atoi("-2147483648") != atoi("-2147483648"))
	{
		printf("FAILED: ft_atoi\n");
		printf("ft_atoi:\t%d\n", ft_atoi("-2147483648"));
		printf("atoi:\t%d\n", atoi("2147483647"));
	}
	else if (ft_atoi("2147483647") != atoi("2147483647"))
	{
		printf("FAILED: ft_atoi\n");
		printf("ft_atoi:\t%d\n", ft_atoi("2147483647"));
		printf("atoi:\t%d\n", atoi("2147483647"));
	}
	else if (ft_atoi("+2147483647") != atoi("+2147483647"))
	{
		printf("FAILED: ft_atoi\n");
		printf("ft_atoi:\t%d\n", ft_atoi("+2147483647"));
		printf("atoi:\t%d\n", atoi("+2147483647"));
	}
	else if (ft_atoi("----2147483648") != atoi("----2147483648"))
	{
		printf("FAILED: ft_atoi\n");
		printf("ft_atoi:\t%d\n", ft_atoi("----2147483648"));
		printf("atoi:\t%d\n", atoi("----2147483648"));
	}
	else if (ft_atoi("+++2147483647") != atoi("+++2147483647"))
	{
		printf("FAILED: ft_atoi\n");
		printf("ft_atoi:\t%d\n", ft_atoi("+++2147483647"));
		printf("atoi:\t%d\n", atoi("+++2147483647"));
	}
	else if (ft_atoi("+-++--2147483647") != atoi("+-++--2147483647"))
	{
		printf("FAILED: ft_atoi\n");
		printf("ft_atoi:\t%d\n", ft_atoi("+-++--2147483647"));
		printf("atoi:\t%d\n", atoi("+-++--2147483647"));
	}
	else if (ft_atoi("-2147483649") != atoi("-2147483649"))
	{
		printf("FAILED: ft_atoi\n");
		printf("ft_atoi:\t%d\n", ft_atoi("-2147483649"));
		printf("atoi:\t%d\n", atoi("-2147483649"));
	}
	else if (ft_atoi("2147483648") != atoi("2147483648"))
	{
		printf("FAILED: ft_atoi\n");
		printf("ft_atoi:\t%d\n", ft_atoi("2147483648"));
		printf("atoi:\t%d\n", atoi("2147483648"));
	}
	else
	{
		printf("SUCCESS: ft_atoi\n");
	}

	/* ft_strdup */
	char	*dest_ftstrdup;
	char	*dest_strdup;
	dest_ftstrdup = ft_strdup("World");
	dest_strdup = strdup("World");
	if (strcmp(dest_ftstrdup, dest_strdup) != 0)
	{
		printf("FAILED: ft_strdup\n");
		printf("ft_strdup: \t%s\n", dest_ftstrdup);
		printf("strdup: \t%s\n", dest_strdup);
	}
	else
	{
		printf("SUCCESS: ft_strdup\n");
	}
	free (dest_ftstrdup);
	free (dest_strdup);

	/* ft_calloc */
	char	*dest_ftcalloc;
	char	*dest_calloc;
	if ((dest_ftcalloc = ft_calloc(sizeof(char), 0)))
		printf("ft_calloc:\t%s\n", dest_ftcalloc);
	if ((dest_calloc = calloc(sizeof(char), 0)))
		printf("calloc:\t%s\n", dest_calloc);
	free(dest_ftcalloc);
	free(dest_calloc);

	/* ft_memset */
	char	dest_ftmemset[250] = "Oyé sapapya, ca vous dirait un icecream avec mon ami et moi ?";
	char	dest_memset[250] = "Oyé sapapya, ca vous dirait un icecream avec mon ami et moi ?";
	ft_memset(dest_ftmemset, '$', 5);
	memset(dest_memset, '$', 5);
	if (strcmp(dest_ftmemset, dest_memset) != 0)
	{
		printf("FAILED: ft_memset\n");
		printf("ft_memset: \t%s\n", dest_ftmemset);
		printf("memset: \t%s\n", dest_memset);
	}
	else
	{
		printf("SUCCESS: ft_memset\n");
	}

	/* ft_bzero */
	ft_bzero(dest_ftmemset, 10);
	bzero(dest_memset, 10);
	if (strcmp(dest_ftmemset, dest_memset) != 0)
	{
		printf("FAILED: ft_bzero\n");
		printf("ft_bzero: \t%s\n", dest_ftmemset);
		printf("bzero: \t%s\n", dest_memset);
	}
	else
	{
		printf("SUCCESS: ft_bzero\n");
	}

	/* ft_memcpy */
	char	dest_ftmemcpy[250];
	char	dest_memcpy[250];
	char	*src_memcpy = "Hello World\0";
	ft_memcpy(dest_ftmemcpy, src_memcpy, strlen(src_memcpy) - 3);
	memcpy(dest_memcpy, src_memcpy, strlen(src_memcpy) - 3);
	if (strcmp(dest_ftmemcpy, dest_memcpy) != 0)
	{
		printf("FAILED: ft_memcpy\n");
		printf("\tft_memcpy: \t%s\n", dest_ftmemcpy);
		printf("\tmemcpy: \t%s\n", dest_memcpy);
		printf("\tstrcmp des 2: \t%d\n", strcmp(dest_ftmemcpy, dest_memcpy));
		printf("\tstrlen ft_memcpy: \t%ld\n", strlen(dest_ftmemcpy));
		printf("\tstrlen memcpy: \t%ld\n", strlen(dest_memcpy));
		printf("Pay attention: encountering some issues when testing results of	memcpy. I don't understand why memcpy fills outter that we ask to. Make `./aout lalali | cat -e` for seeing what's happened in your dest buffer\n");
	}
	else
	{
		printf("FAILED: ft_memcpy\n");
	}
	/*printf("ft_memcpy:\t\%s\n", ft_memcpy((void *)0, (void *)0, 17));*/
/*	printf("memcpy:\t\%s\n", memcpy((void *)0, (void *)0, 17));*/
	/*printf("ft_memcpy:\t\%s\n", ft_memcpy((void *)0, "segfaulter tu dois", 17));*/
	/*printf("memcpy:\t\%s\n", memcpy((void *)0, "segfaulter tu dois", 17));*/
	/* ft_memchr */
	/* ft_memcmp */
	char	s1[] = "Salua";
	char	s2[] = "Saluz";
	printf("ft_memcmp, s1 et s2:\t%d\n", ft_memcmp(s1, s2, strlen(s1)));
	printf("memcmp, s1 et s2:\t%d\n", memcmp(s1, s2, strlen(s1)));
	printf("ft_memcmp, s2 et s1:\t%d\n", ft_memcmp(s2, s1, strlen(s2)));
	printf("memcmp, s2 et s1:\t%d\n", memcmp(s2, s1, strlen(s2)));
	printf("ft_memcmp, s1 et s1:\t%d\n", ft_memcmp(s1, s1, strlen(s1)));
	printf("memcmp, s1 et s1:\t%d\n", memcmp(s1, s1, strlen(s1)));
	printf("ft_memcmp, s_ncmp1 et s_ncmp2:\t%d\n", ft_memcmp(s_ncmp1, s_ncmp2, size_ncmp1));
	printf("memcmp, s_ncmp1 et s_ncmp2:\t%d\n", memcmp(s_ncmp1, s_ncmp2, size_ncmp1));
	printf("ft_memcmp, s_ncmp3 et s_ncmp4:\t%d\n", ft_memcmp(s_ncmp3, s_ncmp4, size_ncmp2));
	printf("memcmp, s_ncmp3 et s_ncmp4:\t%d\n", memcmp(s_ncmp3, s_ncmp4, size_ncmp2));
	printf("ft_memcmp, s_ncmp5 et s_ncmp6:\t%d\n", ft_memcmp(s_ncmp5, s_ncmp6, size_ncmp3));
	printf("memcmp, s_ncmp5 et s_ncmp6:\t%d\n", memcmp(s_ncmp5, s_ncmp6, size_ncmp3));
	printf("ft_memcmp, s_ncmp7 et s_ncmp8:\t%d\n", ft_memcmp(s_ncmp7, s_ncmp8, size_ncmp4));
	printf("memcmp, s_ncmp7 et s_ncmp8:\t%d\n", memcmp(s_ncmp7, s_ncmp8, size_ncmp4));
	printf("ft_memcmp, \\200 et \\0:\t%d\n", ft_memcmp("\200", "\0", 1));
	printf("memcmp, \\200 et \\0:\t%d\n", memcmp("\200", "\0", 1));

	/* ft_strrchr */
	char	s_rchr1[] = "Hello";
	printf("ft_strrchr:\t%s\tstrrchr:\t%s\n", ft_strrchr(s_rchr1, 'l'), strrchr(s_rchr1, 'l'));
	printf("ft_strrchr:\t%s\tstrrchr:\t%s\n", ft_strrchr(s_rchr1, '\0'), strrchr(s_rchr1, '\0'));
	 
	/* ft_strnstr */
	/*char *s_nstr1 = "see FF your FF return FF now FF";
	char *s_nstr2 = "FF";
	size_t max1 = strlen(s_nstr1);
	char *i1 = ft_strnstr(s_nstr1, s_nstr2, max1);
	char *i2 = strnstr(s_nstr1, s_nstr2, max1);
	printf("ft_strnstr: %s\nstrnstr: %s\n", i1, i2);
	if (i1 == i2)
		printf("ft_strnstr: Test OK");
	else
		printf("i1: %p\ti2: %p\n", i1, i2);

	char *s_nstr3 = "FF";
	char *s_nstr4 = "see F your F return F now F";
	size_t max2 = strlen(s_nstr4);
	char *i3 = strnstr(s_nstr3, s_nstr4, max2 );
	char *i4 = ft_strnstr(s_nstr3, s_nstr4, max2 );
	printf("\nstrnstr: %s\n", i3);
	printf("\nft_strnstr: %s\n", i4);
	printf("ft_strnstr: %s\nstrnstr: %s\n", i3, i4);
	if (i3 == i4)
		printf("ft_strnstr: Test OK");
	else
		printf("i3: %p\ti4: %p\n", i3, i4);

	char *s_nstr5 = "MZIRIBMZIRIBMZE123";
	char *s_nstr6 = "MZIRIBMZE";
	size_t max3 = strlen(s_nstr6);
	char *i5 = strnstr(s_nstr5, s_nstr6, max3);
	char *i6 = ft_strnstr(s_nstr5, s_nstr6, max3);
	printf("\nstrnstr: %s\n", i5);
	printf("ft_strnstr: %s\nstrnstr: %s\n", i5, i6);
	if (i5 == i6)
		printf("ft_strnstr: Test OK");
	else
		printf("i5: %p\ti6: %p\n", i5, i6);

	char *big1 = "abcdef";
	char *little1 = "abcdefghijklmnop";
	size_t max4 = strlen(big1);
	char *i7 = strnstr(big1, little1, max4);
	char *i8 = ft_strnstr(big1, little1, max4);

	printf("\nstrnstr: %s\n", i7);
	printf("ft_strnstr: %s\nstrnstr: %s\n", i7, i8);
	if (i7 == i8)
		printf("ft_strnstr: Test OK");
	else
		printf("i7: %p\ti8: %p\n", i7, i8);

	char * big2 = "123456789";
	char * little2 = "9";
	size_t max5 = 8;
	char *i9 = strnstr(big2, little2, max5);
	char *i10 = ft_strnstr(big2, little2, max5);
	printf("\nstrnstr: %s\n", i9);
	printf("ft_strnstr: %s\nstrnstr: %s\n", i9, i10);
	if (i9 == i10)
		printf("ft_strnstr: Test OK");
	else
		printf("i9: %p\ti10: %p\n", i9, i10);

	char *s_nstr7 = "FF";
	char *s_nstr8 = "see FF your FF return FF now FF";
	char *i11 = strnstr(s_nstr7, s_nstr8, 4);
	char *i12 = ft_strnstr(s_nstr7, s_nstr8, 4);

	printf("\nstrnstr: %s\n", i11);
	printf("ft_strnstr: %s\nstrnstr: %s\n", i11, i12);
	if (i11 == i12)
		printf("ft_strnstr: Test OK");
	else
		printf("i11: %p\ti12: %p\n", i11, i12);

	char *s_nstr9 = "";
	char *s_nstr10 = "oh no not the empty string !";
	size_t max6 = strlen(s_nstr10);
	char *i13 = strnstr(s_nstr9, s_nstr10, max6);
	char *i14 = ft_strnstr(s_nstr9, s_nstr10, max6);

	printf("\nstrnstr: %s\n", i13);
	printf("ft_strnstr: %s\nstrnstr: %s\n", i13, i14);
	if (i13 == i14)
		printf("ft_strnstr: Test OK");
	else
		printf("i13: %p\ti14: %p\n", i13, i14);

	char *s_nstr11 = "AAAAAAAAAAAAA";
	size_t max7 = strlen(s_nstr11);
	char *i15 = strnstr(s_nstr11, s_nstr11, max7);
	char *i16 = ft_strnstr(s_nstr11, s_nstr11, max7);

	printf("\nstrnstr: %s\n", i15);
	printf("ft_strnstr: %s\nstrnstr: %s\n", i15, i16);
	if (i15 == i16)
		printf("ft_strnstr: Test OK");
	else
		printf("i15: %p\ti16: %p\n", i15, i16);

	char *s_nstr12 = "A";
	char *i17 = strnstr(s_nstr12, s_nstr12, 2);
	char *i18 = ft_strnstr(s_nstr12, s_nstr12, 2);

	printf("\nstrnstr: %s\n", i17);
	printf("ft_strnstr: %s\nstrnstr: %s\n", i17, i18);
	if (i17 == i18)
		printf("ft_strnstr: Test OK");
	else
		printf("i17: %p\ti18: %p\n", i17, i18);

	printf("%s\n", ft_strnstr(((void *)0), "fake", 3));
	printf("%s\n", strnstr(((void *)0), "fake", 3));
	printf("strnstr: %s\n", strnstr("aaabcabcd", "abcd", 9));
	printf("ft_strnstr: %s\n", ft_strnstr("aaabcabcd", "abcd", 9));*/
	/* fin ft_strnstr */

	/* ft_itoa */
	printf("ft_itoa: %s\n", ft_itoa(25));
	printf("ft_itoa: %s\n", ft_itoa(-542));
	printf("ft_itoa: %s\n", ft_itoa(-42));
	printf("ft_itoa: %s\n", ft_itoa(42));
	printf("ft_itoa: %s\n", ft_itoa(0));
	printf("ft_itoa: %s\n", ft_itoa(-2147483647));
/*	printf("ft_itoa: %s\n", ft_itoa(2147483648));*/
	printf("ft_itoa: %s\n", ft_itoa(INT_MIN));
	printf("ft_itoa: %s\n", ft_itoa(INT_MAX));

	/* ft_substr */
	printf("ft_substr: %s\n", ft_substr("tripouille", 0, 42000));
	printf("ft_substr: %s\n", ft_substr("tripouille", 1, 1));
	printf("ft_substr: %s\n", ft_substr("tripouille", 100, 1));
	printf("ft_substr: %s\n", ft_substr("1", 42, 42000000));

	/* ft_strtrim */
	char	*s_trim1 = "*-***-Salut*-*ca*-*va*-*?";
	char	*set_trim1 = "*-*";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim1, set_trim1));
	printf("\ts_trim: %s\tset: %s\n", s_trim1, set_trim1);

	char	*s_trim2 = "Salutca*-*va?";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim2, set_trim1));
	printf("\ts_trim: %s\tset: %s\n", s_trim2, set_trim1);

	char	*s_trim3 = "Salut*-*ca*-*va*-*?";
	char	*set_trim3 = "-";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim3, set_trim3));
	printf("\ts_trim: %s\tset: %s\n", s_trim3, set_trim3);

	char	*s_trim4 = "Salut*-*ca*-*va*-*?";
	char	*set_trim4 = "";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim4, set_trim4));
	printf("\ts_trim: %s\tset: %s\n", s_trim4, set_trim4);

	char	*s_trim5 = "$$$xxxtripouille";
	char	*set_trim5 = "$x";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim5, set_trim5));
	printf("\ts_trim: %s\tset: %s\n", s_trim5, set_trim5);

	char	*s_trim6 = "tripouille   xxx";
	char	*set_trim6 = " x";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim6, set_trim6));
	printf("\ts_trim: %s\tset: %s\n", s_trim6, set_trim6);

	char	*s_trim7 = "   xxxtripouille   xxx";
	char	*set_trim7 = " x";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim7, set_trim7));
	printf("\ts_trim: %s\tset: %s\n", s_trim7, set_trim7);

	char	*s_trim8 = "$$$xxx$$$xxx";
	char	*set_trim8 = "$x";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim8, set_trim8));
	printf("\ts_trim: %s\tset: %s\n", s_trim8, set_trim8);

	char	*s_trim9 = "";
	char	*set_trim9 = "123";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim9, set_trim9));
	printf("\ts_trim: %s\tset: %s\n", s_trim9, set_trim9);

	char	*s_trim10 = "123";
	char	*set_trim10 = "";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim10, set_trim10));
	printf("\ts_trim: %s\tset: %s\n", s_trim10, set_trim10);

	char	*s_trim11 = "";
	char	*set_trim11 = "";
	printf("ft_strtrim: %s\n", ft_strtrim(s_trim11, set_trim11));
	printf("\ts_trim: %s\tset: %s\n", s_trim11, set_trim11);

	/* tests lelievr */
	char *s_trim12 = "$$$\t$$\n\n$\t\t$$\n\n\nHello$\t$$Please\n$Trim$me$!\n$$$\n$\n$\t\t\n$$";
	char *s_returnattempted_trim12 = "Hello$\t$$Please\n$Trim$me$!";
	char *ret12 = ft_strtrim(s_trim12, "$\n\t");

	if (!strcmp(ret12, s_returnattempted_trim12))
		printf("ft_strim (alelievr): SUCCESS\n");
	else
	{
		printf("ft_strim (alelievr): FAILED\n");
		printf("ft_strtrim: size %ld\t%s\n", strlen(ret12), ret12);
		printf("Attempted return: size %ld\t%s\n", strlen(s_returnattempted_trim12), s_returnattempted_trim12);
	}
	free(ret12);

	char *s_trim13 = "$$$\t$$\n\n$\t\t$$\n\n\nHello$\t$$Please\n$Trim$me$!";
	char *s_returnattempted_trim13 = "Hello$\t$$Please\n$Trim$me$!";
	char *ret13 = ft_strtrim(s_trim13, "$\n\t");

	if (!strcmp(ret13, s_returnattempted_trim13))
		printf("ft_strim (alelievr): SUCCESS\n");
	else
	{
		printf("ft_strim (alelievr): FAILED\n");
		printf("ft_strtrim: size %ld\t%s\n", strlen(ret13), ret13);
		printf("Attempted return: size %ld\t%s\n", strlen(s_returnattempted_trim13), s_returnattempted_trim13);
	}
	free(ret13);

	char *s_trim14 = "Hello$\t$$Please\n$Trim$me$!";
	char *s_returnattempted_trim14 = "Hello$\t$$Please\n$Trim$me$!";
	char *ret14 = ft_strtrim(s_trim14, "$\n\t");

	if (!strcmp(ret14, s_returnattempted_trim14))
		printf("ft_strim (alelievr): \033[1m\033[32mSUCCESS\033[0m\n");
	else
	{
		printf("ft_strim (alelievr): FAILED\n");
		printf("ft_strtrim: size %ld\t%s\n", strlen(ret14), ret14);
		printf("Attempted return: size %ld\t%s\n", strlen(s_returnattempted_trim14), s_returnattempted_trim14);

	}
	free(ret14);

	char *s_trim15 = "\t$$$\n\n\n$$\n\n\t$$$$Hello$\t$$Please\n$Trim$me$!\t\t\t\n$$\t\t\t\t$$";
	char *s_returnattempted_trim15 = "Hello$\t$$Please\n$Trim$me$!";
	char	*ret15 = ft_strtrim(s_trim15, "$\n\t");
	/*int r_size = strlen(s_returnattempted_trim15);
	int size;

	size = get_last_malloc_size();
	if (size == r_size + 1)
		exit(TEST_SUCCESS);
	exit(TEST_KO);*/

	if (!strcmp(ret15, s_returnattempted_trim15))
		printf("ft_strim (alelievr): SUCCESS\n");
	else
	{
		printf("ft_strim (alelievr): FAILED\n");
		printf("ft_strtrim: size %ld\t%s\n", strlen(ret15), ret15);
		printf("Attempted return: size %ld\t%s\n", strlen(s_returnattempted_trim15), s_returnattempted_trim15);
	}
	free(ret15);

	char *s_trim16 = "$$$\t$$\n\n$\t\t$$\n\n\nHello$\t$$Please\n$Trim$me$!\n$$$\n$\n$\t\t\n$$";
	char *s_returnattempted_trim16 = "Hello$\t$$Please\n$Trim$me$!";
	char *ret16 = ft_strtrim(s_trim16, "$\n\t");

	if (!strcmp(ret16, s_returnattempted_trim16))
		printf("ft_strim (alelievr): SUCCESS\n");
	else
	{
		printf("ft_strim (alelievr): FAILED\n");
		printf("ft_strtrim: size %ld\t%s\n", strlen(ret16), ret16);
		printf("Attempted return: size %ld\t%s\n", strlen(s_returnattempted_trim16), s_returnattempted_trim16);

	}
	free(ret16);

	char *s_trim17 = "$$$\t$$\n\n$\t\t$$\n\n\nHello$\t$$Please\n$Trim$me$!\n$$$\n$\n$\t\t\n$$";
	char *s_returnattempted_trim17 = "Hello$\t$$Please\n$Trim$me$!";

	char *ret17 = ft_strtrim(s_trim17, "$\n\t");
	if (!strcmp(ret17, s_returnattempted_trim17))
		printf("ft_strim (alelievr): SUCCESS\n");
	else
	{
		printf("ft_strim (alelievr): FAILED\n");
		printf("ft_strtrim: size %ld\t%s\n", strlen(ret17), ret17);
		printf("Attempted return: size %ld\t%s\n", strlen(s_returnattempted_trim17), s_returnattempted_trim17);

	}
	free(ret17);

	/* ft_split */
	char	*s_split1 = "  tripouille 42  ";
	int		sep_split1 = ' ';
	char	**tab_split1 = ft_split(s_split1, sep_split1);
	int		i = 0;
	while (tab_split1[i])
	{
		printf("tab[%d]: %s, taille: %ld\n", i, tab_split1[i], strlen(tab_split1[i]));
		i++;
	}
	if (tab_split1[i] == NULL)
		printf("tab[%d] est bien initialise a NULL\n", i);
	while (i >= 0)
		free(tab_split1[i--]);
	free(tab_split1);

	char	*s_split2 = "tripouille";
	int		sep_split2 = 0;
	char	**tab_split2 = ft_split(s_split2, sep_split2);
	i = 0;
	while (tab_split2[i])
	{
		printf("tab[%d]: %s, taille: %ld\n", i, tab_split2[i], strlen(tab_split2[i]));
		i++;
	}
	if (tab_split2[i] == NULL)
		printf("tab[%d] est bien initialise a NULL\n", i);
	while (i >= 0)
		free(tab_split2[i--]);
	free(tab_split2);

	char	*s_split3 = "      ";
	int		sep_split3 = ' ';
	char	**tab_split3 = ft_split(s_split3, sep_split3);
	i = 0;
	while (tab_split3[i])
	{
		printf("tab[%d]: %s, taille: %ld\n", i, tab_split3[i], strlen(tab_split3[i]));
		i++;
	}
	if (tab_split3[i] == NULL)
		printf("tab[%d] est bien initialise a NULL\n", i);
	while (i >= 0)
		free(tab_split3[i--]);
	free(tab_split3);

	char	*s_split4 = "      ";
	int		sep_split4 = ' ';
	char	**tab_split4 = ft_split(s_split4, sep_split4);
	i = 0;
	while (tab_split4[i])
	{
		printf("tab[%d]: %s, taille: %ld\n", i, tab_split4[i], strlen(tab_split4[i]));
		i++;
	}
	if (tab_split4[i] == NULL)
		printf("tab[%d] est bien initialise a NULL\n", i);
	while (i >= 0)
		free(tab_split4[i--]);
	free(tab_split4);

	char	*s_split5 = 0;
	int		sep_split5 = 0;
	char	**tab_split5 = ft_split(s_split5, sep_split5);
	i = 0;
	while (tab_split5[i])
	{
		printf("tab[%d]: %s, taille: %ld\n", i, tab_split5[i], strlen(tab_split5[i]));
		i++;
	}
	if (tab_split5[i] == NULL)
		printf("tab[%d] est bien initialise a NULL\n", i);
	while (i >= 0)
		free(tab_split5[i--]);
	free(tab_split5);

	char	*s_split6 = "chinimala";
	int		sep_split6 = ' ';
	char	**tab_split6 = ft_split(s_split6, sep_split6);
	i = 0;
	while (tab_split6[i])
	{
		printf("tab[%d]: %s, taille: %ld\n", i, tab_split6[i], strlen(tab_split6[i]));
		i++;
	}
	if (tab_split6[i] == NULL)
		printf("tab[%d] est bien initialise a NULL\n", i);
	while (i >= 0)
		free(tab_split6[i--]);
	free(tab_split6);

	char	*s_split7 = "";
	int		sep_split7 = 0;
	printf("Nb mots trouves: %d\n", ft_cntwds(s_split7, (char)sep_split7));
	char	**tab_split7 = ft_split(s_split7, sep_split7);
	i = 0;
	while (tab_split7[i])
	{
		printf("tab[%d]: %s, taille: %ld\n", i, tab_split7[i], strlen(tab_split7[i]));
		i++;
	}
	if (tab_split7[i] == NULL)
		printf("tab[%d] est bien initialise a NULL\n", i);
	while (i >= 0)
		free(tab_split7[i--]);
	free(tab_split7);
	return (0);
}
