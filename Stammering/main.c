#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool vowel (char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main(void)
{
    char(v);
    scanf ("%c",&v);
    if (vowel(v))
        printf("this is vowel %c ", v);
    else
        printf("%c", v);
    return 0;
}
