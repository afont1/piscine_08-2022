#include <unistd.h>
char *ft_rev_print(char *str)
{
    int i;
    
    while(str[i])
        i++;
    while(i)
        write(1, &str[--i], 1);
    write(1, "\n", 1);
    return str;
}
#include <stdio.h>
int main()
{
    printf("%s", ft_rev_print("tulas"));
}
