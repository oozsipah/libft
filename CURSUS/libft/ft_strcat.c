#include "libft.h"
char	*ft_strcat(char *dest, char *src)
{
	int i;
	int size;

	size = ft_strlen(dest);
	i = 0;

	while (src[i])
	{
		dest[i + size] = src[i];
		i++;
	}
	dest[i + size] = '\0';
	return (dest);
}