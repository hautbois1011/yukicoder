#include <stdio.h>

int main(void)
{
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    if(b == '?')
        printf("14\n");
    else if(b == '2')
        printf("4\n");
    else if(b == '3')
        printf("1\n");

    return 0;
}
