#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	int cpt = 0;
	if (ac == 2)
		while(av[1][i])
		{
			cpt = 0;
			while(cpt++ < av[1][i] - 96)
				write(1, &av[1][i], 1);
		i++;
		}
	write(1, "\n", 1);
}	
