#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int *res;
	int i;
	
	if (min >= max)
		return 0;
	res = (int *)malloc((max - min) * sizeof(int));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

int	main()
{
	int	*arr;
	int	i;
	int 	size;
	
	i = 0;	
	size = 10;
	arr = ft_range(0,10);
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}
