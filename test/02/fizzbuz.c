#include <unistd.h>

void putnbr(int nbr)
{
	if (nbr > 9)
		putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}
int main()
{
	int i = 0;
	while (++i < 101)
	{
		if (i % 3 == 0)
			write(1, "fizz", 4);
		if (i % 5 == 0)
			write(1, "buzz", 4);
		if (i % 3 != 0 && i % 5 != 0)
			putnbr(i);
		write(1, "\n", 1);
	}
}

