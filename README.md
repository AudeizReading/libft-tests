libft-test
==========

This applies to the new libft.

For using this program, you need this arborescence:

```
.
|- libft
|- libft-test
```
 
Like that, you don't need to change the path for including libft

### For using libft-test:

Go into the libft-test directory and do:

 ```Makefile
 make test
 ```
It will compile the libft *(not bonus yet)* and launch the executable that testing
your libft, but you have to respect the mentionned arborescence.

That's all folks for the moment.
*Pay attention, because this test is incomplete, I will update it gradually.
	- 21/04/18: Only missing the bonus part and need to improve the malloc functions testing*

tests
-----
	* ft_memset
	* ft_bzero
	* ft_memcpy
	* ft_memccpy
	* ft_memcmp
	* ft_memmove *(but should be improved IMPOV)*
	* ft_memchr
	* ft_strlen
	* ft_isalpha
	* ft_isdigit
	* ft_isalnum
	* ft_isascii
	* ft_isprint 
	* ft_toupper
	* ft_tolower
	* ft_strchr
	* ft_strrchr
	* ft_strncmp
	* ft_strlcpy
	* ft_strlcat
	* ft_strnstr
	* ft_atoi
	* ft_calloc *(should be improved about memory leaks)*
	* ft_strdup *(should be improved about memory leaks)*
	* ft_substr *(should be improved about memory leaks)*
	* ft_strjoin *(should be improved about memory leaks)*
	* ft_strtrim *(should be improved about memory leaks)*
	* ft_split *(should be improved about memory leaks)*
	* ft_itoa *(should be improved about memory leaks)*
	* ft_putchar_fd
	* ft_putstr_fd
	* ft_putendl_fd
	* ft_putnbr_fd

