#include <stdio.h>

int main(void)
{
    int N;
    int i, j;
    scanf("%d", &N);

    for(i=N; i>0; i--)
    {
        for(j=0; j<i; j++)
        printf("%d", N);
        printf("\n");
    }
    return 0;
}
