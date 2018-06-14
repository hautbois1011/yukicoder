#include <stdio.h>

int main(void)
{
    int a[5];
    int i;
    int ans = 0;
    scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    for(i=0; i<5; i++)
    {
        if(a[i]%3 == 0 && a[i]%5 == 0)
        {
            ans += 8;
            continue;
        }
        if(a[i]%3 == 0)
        {
            ans += 4;
            continue;
        }
        if(a[i]%5 == 0)
        {
            ans += 4;
            continue;
        }
        /*
        if(a[i] < 10)
        ans += 1;
        else if(a[i] < 100)
        ans += 2;
        else
        ans += 3;
        */
        while(a[i]>0)
        {
            ans++;
            a[i] /= 10;
        }
    }

    printf("%d\n", ans);
}
