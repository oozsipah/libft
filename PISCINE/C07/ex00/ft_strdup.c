#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;

	return i;
	
}

char	*ft_strdup(char *src)
{
	char 	*dest;
	int 	i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char));
	if (dest == NULL)
		return (NULL);

	while (src[i])
	{
		dest[i] = src[i];
		i++;		
	}
	return (dest);
}
int	main()
{
	char *src = "omer";
	char *res = ft_strdup(src);

	printf("%s", res);
	return (0);
}
