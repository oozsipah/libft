#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *s1 = " özsipahi";
	char s2[50] = "ömer";
	ft_putchar('A');
	printf("\n%s\n", ft_strcat(s2, s1));
	printf("%d\n", ft_strcmp(s2, s1));
	printf("%s\n", ft_strcpy(s2, s1));
	printf("%d\n", ft_strlen(s2));
	printf("%s\n", ft_strncat(s2, s1, 8));
	printf("%s\n", ft_strncpy(s2, s1, 4));

	return (0);
}
