void ft_swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
#include <stdio.h>
int main()
{
	int a = 4;
	int b = 6;
	ft_swap(&a ,&b);
	printf("%d	%d", a, b);
}
