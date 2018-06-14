#include <stdio.h>

int main(void)
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    if(X == Y)
        printf("0\n");
    else if(Y == 0)
        printf("1\n");
    else if(X == 0)
        printf("2\n");
    else if(X == -Y)
        printf("3\n");
    else
        printf("-1");

    return 0;
}
