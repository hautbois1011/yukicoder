#include <stdio.h>
#include <stdlib.h>

long long int* dp;

long long int fib(long long int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int main(void)
{
    long long int N;
    scanf("%lld", &N);

    printf("%lld\n", fib(N));

    return 0;
}
