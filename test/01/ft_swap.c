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
    int a = 1, b = 3;
    ft_swap(&a,&b);
    printf("%d", a);
    printf("%d", b);
}
