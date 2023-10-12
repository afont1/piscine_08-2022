#include <unistd.h>
int main(int ac, char **av)
{
	int j = 0;

	if (ac != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (av[1][j])
	{
		if (av[1][j] == 'a')
		{
			write(1, "a\n", 2);
			return (0);
		}
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
