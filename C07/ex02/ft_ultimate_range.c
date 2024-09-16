#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*memory;

	i = 0;
	if (min >= max)
		return 0;
	memory = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < max)
	{
		memory[i] = min;
		min++;;
		i++;
	}
	*range = memory;
	return (i);
}

int	main()
{
	int 	*tab;
	int 	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&tab, 0, 10);
	printf("%d?\n", size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
