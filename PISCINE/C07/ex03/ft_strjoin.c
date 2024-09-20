#include <stdlib.h>
#include <stdio.h>

int	strs_len(int size, char **str, char *sep)
{
	int	i;
	int	j;
	int 	res;

	res = 0;
	i = 0;
	j = 0;
	while (j < size)
	{
		while (str[j][i])
		{
			i++;
		}
		res += i;
		i = 0;
		while (sep[i])
			i++;
		res += i;
		i = 0;
		j++;
	}
	return res;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int	res_size;
	int	i;
	int	j;
	int	k;

	k = 0;
	j = 0;
	i = 0;
	res_size = strs_len(size, strs, sep);
	res = (char *)malloc(res_size + 1 * sizeof(char));
	if (!res)
		return ("Yer ayrılamadı");
	while (j < size)
	{
		while (strs[j][i])
		{
			res[k] = strs[j][i];
			k++;
			i++;
		}

		if (j < size)
		{
			int 	l;
			
			l = 0;
			while (sep[l])
			{
				res[k] = sep[l];
				k++;
				l++;
			}
		}
		i = 0;
		j++;
	}
	res[k] = '\0';
	return (res);
}

int	main()
{
	char	*strs[] = {"hello", "c", "prom", "lang"};
	char 	*sep = " ";
	char	*res = ft_strjoin(4, strs, sep);

	printf("%s", res);
	free(res);
	return 0;
}
