#include <unistd.h>

void	ft_print_numbers(void)
{
	char zero;

	zero = '0';
	while (zero <= '9')
	{
		write(1, &zero, 1);
		zero++;
	}
}
