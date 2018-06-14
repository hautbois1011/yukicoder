#include <stdio.h>

int main(void)
{
    int N, count;
    scanf("%d", &N);

    for(count=0; N>1; count++)
    {
        if(N&1)
            N++;
        else
            N /= 2;
    }

    printf("%d\n", count);
}
