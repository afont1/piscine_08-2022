#include <unistd.h>
void first_word(char *str)
{
    while (*str && (*str == ' ' || *str == '\t'))
        str++;
    while (*str && *str != ' ' && *str != '\t')
        write(1, str++, 1);
}

int main(int a, char **v)
{
    if (a == 2)
        first_word(v[1]);
    write(1, "\n", 1);
    return 0;
}
