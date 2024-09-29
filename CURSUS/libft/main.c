#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *src = "Merhaba Dünya! Dünya Güzel.";
	char *dest = "Dünya";
	// ft_putchar('A');
	// printf("\n%s\n", ft_strcat(s2, s1));
	// printf("%d\n", ft_strcmp(s2, s1));
	// printf("%s\n", ft_strcpy(s2, s1));
	// printf("%d\n", ft_strlen(dest));
	// printf("%s\n", ft_strncat(s2, s1, 8));
	// printf("%s\n", ft_strncpy(s2, s1, 4));
	// printf("%d\n", ft_strncmp(s1, s2, 3));
	// printf("%s\n", ft_strdup(s1));
	// printf("%d\n", ft_atoi("    --++++--++-326942omer"));
	// printf("%s\n", ft_strlcat(dest, src, 12));
	// printf("%s\n", ft_strchr(src, dest));
	// printf("%s\n", ft_strrchr(src, dest));
	printf("%s\n", ft_strstr(src, dest));

	return (0);
}
