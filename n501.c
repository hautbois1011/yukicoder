#include <stdio.h>

int main(void)
{
    int N, D;
    scanf("%d %d", &N, &D);

    if(N >= D)
    {
        for(int i=0; i < D; i++) printf("A");
        for(int i=0; i < N-D; i++) printf("C");
    }
    else
    {
        for(int i=0; i < 2*N-D; i++) printf("A");
        for(int i=0; i < D-N; i++) printf("B");
    }
    printf("\n");

    return 0;
}
